use crate::errors::BitcoinError;
pub use crate::errors::Result;
pub use crate::transactions::parsed_tx::ParseContext;
use alloc::string::ToString;
use app_utils::companion_app;
use third_party::either::Either;
use third_party::either::{Left, Right};

pub trait TxChecker {
    fn check(&self, context: Either<&ParseContext, &companion_app::ParseContext>) -> Result<()>;
}

pub mod psbt {
    use super::*;
    use crate::transactions::psbt::wrapped_psbt::WrappedPsbt;

    impl TxChecker for WrappedPsbt {
        fn check(
            &self,
            context: Either<&ParseContext, &companion_app::ParseContext>,
        ) -> Result<()> {
            match context {
                Left(context) => {
                    self.check_inputs(context)?;
                    self.check_outputs(context)
                }
                _ => Err(BitcoinError::InvalidParseContext(
                    "mismatched context".to_string(),
                )),
            }
        }
    }
}

pub mod raw_tx {
    use super::*;
    use crate::transactions::legacy::TxData;

    impl TxChecker for TxData {
        fn check(
            &self,
            context: Either<&ParseContext, &companion_app::ParseContext>,
        ) -> Result<()> {
            match context {
                Right(context) => {
                    self.check_inputs(context)?;
                    self.check_outputs(context)
                }
                _ => Err(BitcoinError::InvalidParseContext(
                    "mismatched context".to_string(),
                )),
            }
        }
    }
}
