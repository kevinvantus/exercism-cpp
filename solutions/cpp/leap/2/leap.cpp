#include "leap.h"

namespace leap
{
  bool is_leap_year(int year)
  {
    bool can_divide_by_4 = year % 4 == 0;
    bool can_divide_by_100 = year % 100 == 0;
    bool can_divide_by_400 = year % 400 == 0;

    if (can_divide_by_4 && can_divide_by_100 && can_divide_by_400)
    {
      return true;
    }

    // if (can_divide_by_100 && can_divide_by_400)
    // {
    //   return true;
    // }

    return false;
  }
} // namespace leap
