#include <vector>
#include <numeric>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  return accumulate(a.begin(), a.end(), 0) + accumulate(b.begin(), b.end(), 0);
}