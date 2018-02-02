#ifndef BITCOIN_MINING_H
#define BITCOIN_MINING_H
#include "base58.h"
#include "amount.h"
#include "chain.h"
#include "chainparams.h"
#include "consensus/consensus.h"
#include "consensus/merkle.h"
#include "consensus/params.h"
#include "consensus/validation.h"
#include "core_io.h"
#include "init.h"
#include "validation.h"
#include "miner.h"
#include "net.h"
#include "pow.h"
#include "pos.h"
#include "rpc/server.h"
#include "txmempool.h"
#include "util.h"
#include "utilstrencodings.h"
#include "validationinterface.h"
#include "timedata.h"
#include "../uint256.h"
#include <memory>
#include <stdint.h>
#include <boost/assign/list_of.hpp>
#include <boost/shared_ptr.hpp>
#include <univalue.h>

using namespace std;
struct JOHN
{
    int32_t nVersion;
    uint256 hashPrevBlock;
    uint256 hashMerkleRoot;
    uint32_t nTime;
    uint32_t nBits;
    uint32_t nNonce;
};
#endif
