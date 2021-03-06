/*
 *  Copyright (c) 2015, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#pragma once

#include <folly/Range.h>
#include <string>

namespace proxygen {

// Base64 encode using openssl, may return empty string on allocation failure
std::string base64Encode(folly::ByteRange text);

// MD5 encode using openssl
std::string md5Encode(folly::ByteRange text);
}
