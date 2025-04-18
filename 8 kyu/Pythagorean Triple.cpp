#include<vector>
#include<cmath>
using namespace std;

bool PythagoreanTriple(const int a, const int b, const int c)
{
  vector<int> vec(3);
  vec[0] = a, vec[1] = b, vec[2] = c;
  sort(vec.begin(), vec.end());
  return pow(vec[2], 2) == pow(vec[0], 2) + pow(vec[1], 2) ? true : false;
}