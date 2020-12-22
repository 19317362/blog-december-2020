//
// Copyright (c) 2020 Richard Hodges (hodges.r@gmail.com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef DECEMBER_2020_MESSAGE_HPP
#define DECEMBER_2020_MESSAGE_HPP
#include <cstddef>
#include <iosfwd>
#include <span>
#include <string_view>

namespace websocket
{
struct message
{
    bool
    is_text() const;

    bool
    is_binary() const;

    std::string_view
    text() const;

    std::span< std::byte >
    binary() const;
};

std::ostream &
operator<<(std::ostream &os, message const &m);

}   // namespace websocket

#endif   // DECEMBER_2020_MESSAGE_HPP
