#include <vector>
using namespace std;

vector<int> countPositivesSumNegatives(vector<int> input)
{
  if(input.empty()) return {};
  vector<int> res(2);
  for(int i=0 ; i<input.size(); i++){
    if(input[i] > 0) ++res[0];
    else res[1] += input[i];
  }
  return res;
}