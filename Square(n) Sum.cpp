#include <vector>

int square_sum(const std::vector<int>& numbers)
{
  int res = 0;
  for(int i=0 ; i < numbers.size(); i++){
    res += numbers[i]*numbers[i];
  }
  return res;
}

//===========================================

#include <vector>
#include <numeric>

int square_sum(const std::vector<int>& v) {
  int x = std::inner_product(v.begin(), v.end(), v.begin(), 0 );
  return x;
}