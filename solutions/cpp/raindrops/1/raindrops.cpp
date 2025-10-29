#include <iostream>
#include <string>
#include "raindrops.h"

using namespace std;

namespace raindrops
{
  string convert(int x)
  {
    string result = "";
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
      result += to_string(x);
    }
    return result;
  }
} // namespace raindrops

int main()
{
  cout << raindrops::convert(1) << endl;
  cout << raindrops::convert(3) << endl;
  cout << raindrops::convert(5) << endl;
  cout << raindrops::convert(7) << endl;
  cout << raindrops::convert(6) << endl;
  cout << raindrops::convert(8) << endl;
  cout << raindrops::convert(9) << endl;
  cout << raindrops::convert(10) << endl;
  cout << raindrops::convert(14) << endl;
  cout << raindrops::convert(15) << endl;
  cout << raindrops::convert(21) << endl;
  cout << raindrops::convert(25) << endl;
  cout << raindrops::convert(27) << endl;
  cout << raindrops::convert(35) << endl;
  cout << raindrops::convert(49) << endl;
  cout << raindrops::convert(52) << endl;
  cout << raindrops::convert(105) << endl;
  cout << raindrops::convert(3125) << endl;

  return EXIT_SUCCESS;
}