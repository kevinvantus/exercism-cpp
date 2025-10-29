#include "darts.h"
#include <cmath>

namespace darts
{
  int score(double x, double y)
  {
    int total_points{};
    int distance = static_cast<int>(darts::calculate_distance(x, y));

    if (distance <= 1)
    {
      total_points = 10;
    }
    else if (distance <= 5)
    {
      total_points = 5;
    }
    else if (distance <= 10)
    {
      total_points = 1;
    }
    else
    {
      total_points = 0;
    }
    return total_points;
  }

  double calculate_distance(double x, double y)
  {
    return sqrt(pow(x, 2) + pow(y, 2));
  }
} // namespace darts
