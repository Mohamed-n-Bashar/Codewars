#include <vector>
#include <cstdint>
#include <cmath>
using namespace std;

vector<uint64_t> powers_of_two(int n) {
  vector<uint64_t> res;
  for(int i=0; i<=n ; i++)
    res.push_back(pow(2,i));
  return res;
}