#include <vector>
using namespace std;

vector<int> pipe_fix(vector<int> nums) {
  vector<int> res;
  for(int i = nums[0] ; i <= nums[nums.size()-1] ; i++){
    res.push_back(i);
  }
  return res;
}