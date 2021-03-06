// Copyright (c) 2019 The Zcash developers
// Copyright (c) 2017-2020 The LitecoinZ Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ASYNCRPCOPERATION_COMMON_H
#define ASYNCRPCOPERATION_COMMON_H

#include <primitives/transaction.h>
#include <univalue.h>
#include <wallet/wallet.h>

/**
 * Sends a given transaction.
 *
 * If testmode is false, commit the transaction to the wallet,
 * return {"txid": tx.GetHash().ToString()}
 *
 * If testmode is true, do not commit the transaction,
 * return {"test": 1, "txid": tx.GetHash().ToString(), "hex": EncodeHexTx(tx)}
 */
UniValue SendTransaction(CTransactionRef& tx, CWallet* const pwallet, CAmount nFee, bool testmode);

/**
 * Sign and send a raw transaction.
 * Raw transaction as hex string should be in object field "rawtxn"
 *
 * Returns a pair of (the parsed transaction, and the result of sending)
 */
std::pair<CTransactionRef, UniValue> SignSendRawTransaction(UniValue obj, CWallet* const pwallet, CAmount nFee, bool testmode);

#endif /* ASYNCRPCOPERATION_COMMON_H */
