#include <vector>
using namespace std;

vector<int> flip(char dir, vector<int> arr) {
  if (dir == 'R')
    sort(arr.begin(), arr.end());
  if (dir == 'L')
    sort(arr.rbegin(), arr.rend());
  return arr;
}