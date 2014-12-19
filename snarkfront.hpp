#ifndef _SNARKFRONT_HPP_
#define _SNARKFRONT_HPP_

////////////////////////////////////////////////////////////////////////////////
// this header file includes everything applications need
//

// the basic language
#include "FoundationDSL.hpp"

// progress bar for proof generation and verification
#include "GenericProgressBar.hpp"

// input and printing of hexadecimal text
#include "HexUtil.hpp"

// initialize elliptic curves
#include "MainEC.hpp"

// Merkle tree
#include "MerkleTree.hpp"

// Secure Hash Algorithms
#include "SHA_1.hpp"
#include "SHA_224.hpp"
#include "SHA_256.hpp"
#include "SHA_384.hpp"
#include "SHA_512.hpp"
#include "SHA_512_224.hpp"
#include "SHA_512_256.hpp"

#endif
