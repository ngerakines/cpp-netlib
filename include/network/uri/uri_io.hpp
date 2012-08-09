// Copyright (c) Glyn Matthews 2011, 2012.
// Copyright 2012 Dean Michael Berris <dberris@google.com>
// Copyright 2012 Google, Inc.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef NETWORK_URI_URI_IO_INC
#define NETWORK_URI_URI_IO_INC

#include <network/uri/uri.hpp>
#include <iosfwd>

namespace network {
std::ostream &operator << (std::ostream &os, const uri &uri_);

std::wostream &operator << (std::wostream &os, const uri &uri_);

std::ostream &operator << (std::ostream &os, const uri::scheme_range &scheme);

std::ostream &operator << (std::ostream &os, const uri::user_info_range &user_info);

std::ostream &operator << (std::ostream &os, const uri::host_range &host);

std::ostream &operator << (std::ostream &os, const uri::port_range &port);

std::ostream &operator << (std::ostream &os, const uri::path_range &path);

std::ostream &operator << (std::ostream &os, const uri::query_range &query);

std::ostream &operator << (std::ostream &os, const uri::fragment_range &fragment);

std::istream &operator >> (std::istream &is, uri &uri_);

std::wistream &operator >> (std::wistream &is, uri &uri_);
} // namespace network

#endif // NETWORK_URI_URI_IO_INC
