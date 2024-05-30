use crate::errors::Result;
use crate::structs::{TonProof, TonTransaction};
use crate::utils::sha256;
use crate::vendor::cell::BagOfCells;
use alloc::{format, vec};
use alloc::vec::Vec;
use third_party::cryptoxide::ed25519;
use third_party::hex;

pub fn parse_transaction(serial: &[u8]) -> Result<TonTransaction> {
    TonTransaction::parse_hex(serial)
}

pub fn buffer_to_sign(serial: &[u8]) -> Result<Vec<u8>> {
    let boc = BagOfCells::parse(serial)?;
    let root = boc.single_root()?;
    let buffer_to_sign = root.cell_hash()?;
    Ok(buffer_to_sign)
}

pub fn sign_transaction(serial: &[u8], sk: [u8; 32]) -> Result<[u8; 64]> {
    let tx = buffer_to_sign(serial)?;
    let (keypair, _) = ed25519::keypair(&sk);
    let signature = ed25519::signature(&tx, &keypair);
    Ok(signature)
}

pub fn parse_proof(serial: &[u8]) -> Result<TonProof> {
    TonProof::parse_hex(serial)
}

pub fn sign_proof(serial: &[u8], sk: [u8; 32]) -> Result<[u8; 64]> {
    let message = [vec![0xff, 0xff], "ton-connect".as_bytes().to_vec(), sha256(serial)].concat();
    rust_tools::debug!(format!("message: {:?}", hex::encode(&message)));
    let hash = sha256(&message);
    rust_tools::debug!(format!("hash: {:?}", hex::encode(&hash)));
    let (keypair, _) = ed25519::keypair(&sk);
    rust_tools::debug!(format!("sk: {:?}", hex::encode(&keypair)));
    let signature = ed25519::signature(&hash, &keypair);
    rust_tools::debug!(format!("signature: {:?}", hex::encode(&signature)));
    Ok(signature)
}

#[cfg(test)]
mod tests {
    extern crate std;
    use base64::{engine::general_purpose::STANDARD, Engine};
    use num_traits::sign;
    use std::println;
    use third_party::hex;
    use urlencoding;

    use crate::{transaction::parse_transaction, vendor::cell::BagOfCells};

    use super::sign_proof;

    #[test]
    fn test_parse_transaction() {
        // "tonsign://?pk=j7SUzAOty6C3woetBmEXobZoCf6vJZGoQVomHJc42oU=&body=te6cckEBAwEA7AABHCmpoxdmOZW/AAAABgADAQHTYgAIqFqMWTE1aoxM/MRD/EEluAMqKyKvv/FAn4CTTNIDD6B4KbgAAAAAAAAAAAAAAAAAAA+KfqUACSD7UyTMBDtxsAgA7zuZAqJxsqAciTilI8/iTnGEeq62piAAHtRKd6wOcJwQOThwAwIA1yWThWGAApWA5YrFIkZa+bJ7vYJARri8uevEBP6Td4tUTty6RJsGAh5xAC1IywyQwixSOU8pezOZDC9rv2xCV4CGJzOWH6RX8BTsMAK2ELwgIrsrweR+b2yZuUsWugqtisQzBm6gPg1ubkuzBkk1zw8=";
        let body = "te6cckEBAwEA7AABHCmpoxdmOZW/AAAABgADAQHTYgAIqFqMWTE1aoxM/MRD/EEluAMqKyKvv/FAn4CTTNIDD6B4KbgAAAAAAAAAAAAAAAAAAA+KfqUACSD7UyTMBDtxsAgA7zuZAqJxsqAciTilI8/iTnGEeq62piAAHtRKd6wOcJwQOThwAwIA1yWThWGAApWA5YrFIkZa+bJ7vYJARri8uevEBP6Td4tUTty6RJsGAh5xAC1IywyQwixSOU8pezOZDC9rv2xCV4CGJzOWH6RX8BTsMAK2ELwgIrsrweR+b2yZuUsWugqtisQzBm6gPg1ubkuzBkk1zw8=";
        let result = STANDARD.decode(body).unwrap();
        let result = BagOfCells::parse(&result).unwrap();
        println!("{:?}", result);
        result.single_root().unwrap().parse_fully(|parser| {
            let address = parser.load_address().unwrap();
            println!("{}", parser.remaining_bits());
            println!("{}", address);
            Ok(())
        });
        // let result = super::parse_transaction(&serial);
        // assert!(result.is_err());
    }

    #[test]
    fn test_parse_ton_transfer() {
        // tonsign://?network=ton&pk=j7SUzAOty6C3woetBmEXobZoCf6vJZGoQVomHJc42oU%3D&body=te6cckEBAgEARwABHCmpoxdmOz6lAAAACAADAQBoQgArFnMvHAX9tOjTp4%2FRDd3vP2Bn8xG%2BU5MTuKRKUE1NoqHc1lAAAAAAAAAAAAAAAAAAAHBy4G8%3D
        let body = "te6cckEBAgEARwABHCmpoxdmOz6lAAAACAADAQBoQgArFnMvHAX9tOjTp4/RDd3vP2Bn8xG+U5MTuKRKUE1NoqHc1lAAAAAAAAAAAAAAAAAAAHBy4G8=";
        let serial = STANDARD.decode(body).unwrap();
        let tx = parse_transaction(&serial).unwrap();
        println!("{:?}", tx);
        let tx_json = tx.to_json().unwrap();
        println!("{}", tx_json);
    }

    #[test]
    fn test_sign_ton_transaction() {
        //j7SUzAOty6C3woetBmEXobZoCf6vJZGoQVomHJc42oU=
        // tonsign://?network=ton&pk=j7SUzAOty6C3woetBmEXobZoCf6vJZGoQVomHJc42oU%3D&body=te6cckEBAgEARwABHCmpoxdmQcAiAAAADQADAQBoQgArFnMvHAX9tOjTp4%2FRDd3vP2Bn8xG%2BU5MTuKRKUE1NoqAvrwgAAAAAAAAAAAAAAAAAAPa2C0o%3D
        let body = "te6cckEBAgEARwABHCmpoxdmQcAiAAAADQADAQBoQgArFnMvHAX9tOjTp4%2FRDd3vP2Bn8xG%2BU5MTuKRKUE1NoqAvrwgAAAAAAAAAAAAAAAAAAPa2C0o%3D";
        let serial = STANDARD
            .decode(urlencoding::decode(body).unwrap().into_owned())
            .unwrap();
        let master_seed = "b4933a592c18291855b30ea5cc8da7cb20da17936df875f018c6027f2103f6ad8ff409400be6e913e43a3bf9dd23274f918e3bd7ca679b06e7fee04bc0d41f95";
        let master_seed = hex::decode(master_seed).unwrap();
        let mut sk: [u8; 32] = [0; 32];
        for i in 0..32 {
            sk[i] = master_seed[i]
        }
        let signature = super::sign_transaction(&serial, sk).unwrap();
        println!("{}", hex::encode(&signature));
        println!(
            "tonkeeper://publish?boc={}",
            urlencoding::encode(&STANDARD.encode(&signature))
        );
    }

    #[test]
    fn test_parse_ston_transfer() {
        let serial = "b5ee9c7241010301009e00011c29a9a3176656eb410000001000030101686200091c1bd942402db834b5977d2a1313119c3a3800c8e10233fa8eaf36c655ecab202faf0800000000000000000000000000010200a80f8a7ea5546de4ef815e87fb3989680800ac59ccbc7017f6d3a34e9e3f443777bcfd819fcc46f94e4c4ee291294135368b002d48cb0c90c22c52394f297b33990c2f6bbf6c425780862733961fa457f014ec02025f1050ae";
        let serial = hex::decode(serial).unwrap();
        let tx = parse_transaction(&serial).unwrap();
        //true destination UQBWLOZeOAv7adGnTx-iG7vefsDP5iN8pyYncUiUoJqbRdx9
        //transaction to: EQASODeyhIBbcGlrLvpUJiYjOHRwAZHCBGf1HV5tjKvZVsJb
        //contract destination: EQBWLOZeOAv7adGnTx+iG7vefsDP5iN8pyYncUiUoJqbRYG4
        println!("{:?}", tx);
    }

    #[test]
    fn test_sign_ton_proof() {
        let serial = hex::decode("746f6e2d70726f6f662d6974656d2d76322f00000000b5232c324308b148e53ca5ecce6430bdaefdb1095e02189cce587e915fc053b015000000746b6170702e746f6e706f6b65722e6f6e6c696e65142b5866000000003735323061653632393534653666666330303030303030303636353765333639").unwrap();
        //b4933a592c18291855b30ea5cc8da7cb20da17936df875f018c6027f2103f6ad
        let signature = sign_proof(&serial, [0u8; 32]);
        println!("{}", hex::encode(signature.unwrap()));

        // ffff746f6e2d636f6e6e6563745adfd8ce7eeb56a65c82002216e042f69abe0dfb40b13b1096b5a817e8f9e8d7
        // e87aadb24661f2b3b517a4a3b24cda5aef17dc381bd99cc971811c4c096385b3
        // f7dfec305cd324692fcb73ce55700724a86b22e3f74d3f06b6712da2f5cfd1b7cfd4a0b1944311951b4c4829dee97dd2fbef989afbcc5756408daa95e6ad1d02

        // ffff746f6e2d636f6e6e6563745adfd8ce7eeb56a65c82002216e042f69abe0dfb40b13b1096b5a817e8f9e8d7
        // e87aadb24661f2b3b517a4a3b24cda5aef17dc381bd99cc971811c4c096385b3
        // f7dfec305cd324692fcb73ce55700724a86b22e3f74d3f06b6712da2f5cfd1b7cfd4a0b1944311951b4c4829dee97dd2fbef989afbcc5756408daa95e6ad1d02
    }
}
