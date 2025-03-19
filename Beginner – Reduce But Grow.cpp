#include <vector>
int grow(std::vector<int> nums) {
  int mult = 1;
  for(int i=0; i < nums.size(); i++)
    mult *= nums[i];
  return mult;
}