#include <string>
using namespace std;

string repeat_str(size_t repeat, const string& str) {
  string Nstr;
  for(int i = 0 ; i < repeat ; i++){
    Nstr.insert(0, str);
  }
  return Nstr;
}