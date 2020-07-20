// Copyright (c) 2018 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file license.txt or http://www.opensource.org/licenses/mit-license.php.

#ifndef __INCLUDED_COIN_H__
#define __INCLUDED_COIN_H__

#include <string>

static const int FIRST_PROTOCOL_VERSION = 70012;
static const int PROTOCOL_VERSION = 70012;
static const int REQUIRE_PROTOCOL_VERSION = 70012;

static const int MAINNET_MIN_HEIGHT = 1751415;
static const int TESTNET_MIN_HEIGHT = 500000;

static const std::string seeder_version = "/vericoin-seeder:1.8.0/";

static const std::string mainnet_seeds[] = {"206.189.59.89",
                                            "206.189.209.81",
                                            "206.189.145.110",
                                            "emea.vrc.vericonomy.com",
                                            "amer.vrc.vericonomy.com",
                                            "apac.vrc.vericonomy.com",
                                            "seed.vrc.mining-pool.ovh",
                                            ""};

static const std::string testnet_seeds[] = {"", ""};

static const int mainnet_port = 58684;
static const int testnet_port = 48684;

static unsigned char pchMessageStart[4] = { 0x70, 0x35, 0x22, 0x05 };
static unsigned char pchMessageStart_testnet[4] = { 0x70, 0x35, 0x22, 0x05 };

#endif // __INCLUDED_COIN_H__
