#include <string>
using namespace std;
string sum_str(string a, string b) {
  if(a.empty()) a="0";
  if(b.empty()) b="0";
  
  return to_string(stoi(a) + stoi(b));
}
