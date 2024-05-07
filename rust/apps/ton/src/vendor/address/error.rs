use alloc::string::{String, ToString};
use third_party::thiserror::Error;
use third_party::thiserror;

#[derive(Error, Debug)]
#[error("Invalid address (Address: {address}, message: {message})")]
pub struct TonAddressParseError {
    address: String,
    message: String,
}

impl TonAddressParseError {
    pub fn new<A: ToString, M: ToString>(address: A, message: M) -> TonAddressParseError {
        TonAddressParseError {
            address: address.to_string(),
            message: message.to_string(),
        }
    }
}
