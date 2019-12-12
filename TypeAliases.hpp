#pragma once

#include <string>
#include <vector>
#include <boost/optional.hpp>

using Hex = unsigned char;
using HexInt = unsigned int;
using Hexes = std::vector<Hex>;
using HexesInt = std::vector<HexInt>;

using Strings = std::vector<std::string>;
using StringsMatrix = std::vector<std::vector<std::string>>;
using MaybeString = boost::optional<std::string>;
using MaybeStrings = boost::optional<std::vector<std::string>>;

using ReturnCode = bool;

namespace frameType
{
enum class BYTE_CTRL : int
{
   I = 0,
   U = 1,
   XID = 2,
};
}
