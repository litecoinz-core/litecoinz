// Copyright (c) 2019 The Bitcoin Core developers
// Copyright (c) 2017-2020 The LitecoinZ Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <bench/data.h>

namespace benchmark {
namespace data {

#include <bench/data/block200.raw.h>
const std::vector<uint8_t> block200{block200_raw, block200_raw + sizeof(block200_raw) / sizeof(block200_raw[0])};

} // namespace data
} // namespace benchmark
