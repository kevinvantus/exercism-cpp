#include <string>
#include "raindrops.h"

namespace raindrops {
    std::string convert(int x)
  {
    std::string result = "";
    bool can_divide_by_3 = x % 3 == 0;
    bool can_divide_by_5 = x % 5 == 0;
    bool can_divide_by_7 = x % 7 == 0;

    if (can_divide_by_3)
    {
      result += "Pling";
    }

    if (can_divide_by_5)
    {
      result += "Plang";
    }

    if (can_divide_by_7)
    {
      result += "Plong";
    }

    if (!can_divide_by_3 && !can_divide_by_5 && !can_divide_by_7)
    {
      result += std::to_string(x);
    }
    return result;
  }
}  // namespace raindrops
