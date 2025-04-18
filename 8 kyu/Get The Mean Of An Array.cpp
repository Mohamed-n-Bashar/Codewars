#include <vector>
#include <numeric>

int get_average(std::vector <int> marks)
{
  return (accumulate(marks.begin(), marks.end(), 0)/marks.size());
}