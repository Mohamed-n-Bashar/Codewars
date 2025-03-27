#include <vector>
#include <string>
using namespace std;

bool check(const vector<string>& seq, const string& elem) {
  if(find(seq.begin(), seq.end(), elem) != seq.end())
    return true;
  return false;
}