#ifndef SRC_UTILS_TYPEALIASES
#define SRC_UTILS_TYPEALIASES

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
   SNRM = 4,
   U = 1,
   XID = 2,
};
}

namespace frameU
{
enum class BYTE_CTRL : int
{
   UA = 10,
   SNRM = 11
};
}

#endif  // SRC_UTILS_TYPEALIASES
