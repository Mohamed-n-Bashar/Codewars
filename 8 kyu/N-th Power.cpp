#include <vector>
#include <cmath>

int index(const std::vector<int> &vector, int n) {
  if(n<vector.size())
    return pow(vector[n],n);
  return -1;
}