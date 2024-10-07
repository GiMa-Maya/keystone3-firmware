#![no_std]
#![feature(error_in_core)]
#![feature(prelude_2024)]
#![allow(dead_code)] // add for solana use a lot of external code

extern crate alloc;
extern crate core;
#[cfg(test)]
#[macro_use]
extern crate std;

use alloc::format;
use alloc::string::{String, ToString};
use alloc::vec::Vec;

pub use address::get_address;

use crate::parser::structs::ParsedSolanaTx;
use crate::read::Read;
use crate::structs::SolanaMessage;

mod address;
mod compact;
pub mod errors;
mod instruction;
pub mod message;
pub mod parser;
pub mod read;
mod resolvers;
mod solana_lib;
pub mod structs;
pub mod utils;
pub fn parse_message(tx_hex: Vec<u8>, from_key: &String) -> errors::Result<SolanaMessage> {
    let raw_message = hex::encode(tx_hex.clone());
    let mut utf8_message =
        String::from_utf8(tx_hex).map_or_else(|_| "".to_string(), |utf8_msg| utf8_msg);
    if app_utils::is_cjk(&utf8_message) {
        utf8_message = "".to_string();
    }
    SolanaMessage::from(raw_message, utf8_message, from_key)
}

pub fn validate_tx(message: &mut Vec<u8>) -> bool {
    message::Message::validate(message)
}

pub fn parse(data: &Vec<u8>) -> errors::Result<ParsedSolanaTx> {
    ParsedSolanaTx::build(data)
}

pub fn sign(message: Vec<u8>, hd_path: &String, seed: &[u8]) -> errors::Result<[u8; 64]> {
    keystore::algorithms::ed25519::slip10_ed25519::sign_message_by_seed(&seed, hd_path, &message)
        .map_err(|e| errors::SolanaError::KeystoreError(format!("sign failed {:?}", e.to_string())))
}

#[cfg(test)]
mod tests {
    use third_party::hex::{FromHex, ToHex};
    use third_party::ur_registry::solana::sol_sign_request::SolSignRequest;

    use crate::solana_lib::solana_program::pubkey::Pubkey;

    use super::*;

    #[test]
    fn test_solana_sign() {
        let hd_path = "m/44'/501'/0'".to_string();
        let tx_hex =  Vec::from_hex("010002041a93fffb26ce645adeae58f0f414c320bcec30ce12a66bd263a91ec9b3958ff46f345144d352e4190c2dec43e1d3e0296a49bdfc2594eed9d8a5902e22d0af8b00000000000000000000000000000000000000000000000000000000000000000306466fe5211732ffecadba72c39be7bc8ce5bbc5f7126b2c439b3a40000000f70a9d4448ef435c5beab6cbc4211e00ddb4b9ad84886385f8b7ccfb9d9e7ca40303000903d8d600000000000003000502400d0300020200010c020000008096980000000000").unwrap();
        let seed = hex::decode("5eb00bbddcf069084889a8ab9155568165f5c453ccb85e70811aaed6f6da5fc19a5ac40b389cd370d086206dec8aa6c43daea6690f20ad3d8d48b2d2ce9e38e4").unwrap();
        let signature = sign(tx_hex, &hd_path, seed.as_slice()).unwrap();
        assert_eq!("9625b26df39be0a392cd2f0db075a238fe7bd98d181b8705bcc6c1c64f652294c54760af911cca245769489c30c12e44cf5e139ca71f1acc834eea4b63017b00", signature.encode_hex::<String>());
    }

    #[test]
    fn test_solana_validate() {
        let mut tx_hex =  Vec::from_hex("010002041a93fffb26ce645adeae58f0f414c320bcec30ce12a66bd263a91ec9b3958ff46f345144d352e4190c2dec43e1d3e0296a49bdfc2594eed9d8a5902e22d0af8b00000000000000000000000000000000000000000000000000000000000000000306466fe5211732ffecadba72c39be7bc8ce5bbc5f7126b2c439b3a40000000f70a9d4448ef435c5beab6cbc4211e00ddb4b9ad84886385f8b7ccfb9d9e7ca40303000903d8d600000000000003000502400d0300020200010c020000008096980000000000").unwrap();
        assert_eq!(true, validate_tx(&mut tx_hex));
    }

    #[test]
    fn test_solana_parse_message() {
        let cbor_hex = "a401d82550316ddac29df74514b9d8f53ebd847a750259021d6d616769636564656e2e696f2077616e747320796f7520746f207369676e20696e207769746820796f757220536f6c616e61206163636f756e743a0a47575a567a6353324d58664671486d50373832517833527a6b6b5158324b666763685a504c703341455a726d0a0a436c69636b205369676e206f7220417070726f7665206f6e6c79206d65616e7320796f7520686176652070726f76656420746869732077616c6c6574206973206f776e656420627920796f752e205468697320726571756573742077696c6c206e6f74207472696767657220616e7920626c6f636b636861696e207472616e73616374696f6e206f7220636f737420616e7920676173206665652e20557365206f66206f7572207765627369746520616e64207365727669636520617265207375626a65637420746f206f7572205465726d73206f6620536572766963653a2068747470733a2f2f6d616769636564656e2e696f2f7465726d732d6f662d736572766963652e70646620616e64205072697661637920506f6c6963793a2068747470733a2f2f6d616769636564656e2e696f2f707269766163792d706f6c6963792e7064660a0a5552493a2068747470733a2f2f6d616769636564656e2e696f0a56657273696f6e3a20310a436861696e2049443a206d61696e6e65740a4e6f6e63653a2076706478336e476662390a4973737565642041743a20323032332d30372d32375430323a31303a34392e3136315a03d90130a20188182cf51901f5f500f500f5021a527447030601";
        let pubkey = "e671e524ef43ccc5ef0006876f9a2fd66681d5abc5871136b343a3e4b073efde".to_string();
        let sol_sign_request = SolSignRequest::try_from(hex::decode(cbor_hex).unwrap()).unwrap();
        let parsed = parse_message(sol_sign_request.get_sign_data(), &pubkey).unwrap();
        assert_eq!("GWZVzcS2MXfFqHmP782Qx3RzkkQX2KfgchZPLp3AEZrm", parsed.from);
    }

    #[test]
    fn test_solana_version_message() {
        let mut buffer = hex::decode("8001000308ad7dba70a9559a85961a00a0d00e7caf6967ff28c5861360cd8e22abcbb9b3eb080a39da2d35d3c666ff3d5195bb9065ed97a2208b4245bc70e69ff4b1d2b73fff21b6871e314c96e0848ba15117ec8cef8433b5a594ff2b88798b7e6d37b84e0a0cc6b26d4216a826e48cbb719136037e76cc273efb63ec73a6f2cb56cfa6015f376f7759fe1a4270a9b568d86110869cb073c8580adc986a178c876c18ee3d0306466fe5211732ffecadba72c39be7bc8ce5bbc5f7126b2c439b3a4000000004b2acb11258cce3682c418ba872ff3df91102712f15af12b6be69b3435b0008eaa020c61cc479712813461ce153894a96a6c00b21ed0cfc2798d1f9a9e9c94a5b6bfd38a1d64b54c65490c10b1be53496be5ede8d18086335aade667915e9e90705000502400d03000500090310010a00000000000606080d0706060e0802da8aeb4fc9196606030d010808218493e497c04859060b0001090802030d0f101112098c90fd150a4af80300060c00010d09080a0b0c04061113104b5d5ddc2296dac4ffffffffffffffff060b0001090802030d0f101112098c90fd150a4af803000110aaf654f15c22d8c9aa80622becb4872b0f5a52cc8f467d8a0da58b19197d690540024544420701757403060704").unwrap();
        let pubkey = "e671e524ef43ccc5ef0006876f9a2fd66681d5abc5871136b343a3e4b073efde".to_string();
        let parsed = validate_tx(&mut buffer);
        assert_eq!(true, parsed)
    }

    #[test]
    fn test_solana_version_message_2() {
        let mut buffer = hex::decode("800100080ed027455eccf0385fc38f217c5bfbb95f711a16fbe782af7b33a97d1f17ebcd79281764ffe753b4a7a87393561a7178e5d7048eabf5302f5b0ac9ff8c2cd40560f06ebde13476f2455bc64dd1d49730033c0bac118dcbf72c38da62354df37a861c98c04915df1902f5c239c753a4bb55932b2e60b713c81bc81be9badfed8e7968e9def8e27815d652d0072a832a901e7960d89173ba8cb1c9450507eb7129f6d82fac025f4fec4efb956ef13dc4145063534dcddc006382f016f49a64eb71818c97258f4e2489f1bb3d1029148e0d830b5a1399daff1084048e7bd8dbe9f8591b8ffe6224eb2dcd8c0558731a23be68b7f64292a77e9b76889a44264468fff3000000000000000000000000000000000000000000000000000000000000000006ddf6e1d765a193d9cbe146ceeb79ac1cb485ed5f5b37913a8cf5857eff00a90306466fe5211732ffecadba72c39be7bc8ce5bbc5f7126b2c439b3a40000000069b8857feab8184fb687f634618c035dac439dc1aeb3b5598a0f00000000001ca4d39964c9cb5f9790d0a12969f60fd9724936284ea4a12daded42ddfa69c5d0479d52dedbf6bc5ecd09d84534a34aea5975043b36fd02b24650bb58443595c973c265a4390cf341062b67c0c2df7225807028c17a4006a4cfea9e5cfebe53f0706060001071e080901010a000502c05c15000a000903d8d600000000000006060002000b0809010106060003000c080901010d280900041b091c1d00050e0f0210111b091f20000212130314152122160003041718191a092324250126e517cb977ae3ad2a0003000000020302030219a086010000000000054000000000000032004b0903020000010903fe234c2bed04b83d2bc2e13d5320d2c0e31393816adb2d0bca769afbeb0bea1004c6c8c4c30304c5c2ac6488e2949297db40612a5f2340f0bc6a1c476982accc1a20b032e4d99c04fa048e8b898a031d8f8dd64fd4ba4db1bd148b9135fd8024bc94a40d9849e774d871cb2d366ae6a0265205b7b5bfbeb60564bca2bbba").unwrap();
        let pubkey = "e671e524ef43ccc5ef0006876f9a2fd66681d5abc5871136b343a3e4b073efde".to_string();
        let parsed = parse(&buffer);
        assert_eq!(true, parsed.is_ok())
    }
}
