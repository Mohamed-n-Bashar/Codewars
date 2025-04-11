#include <string>

std::string countSheep(int number) {
  return number ? countSheep(number - 1) + std::to_string(number) + " sheep..." : "";
}

//========================================================================

#include <string>
#include <string.h>
using namespace std;

string countSheep(int number) {
  string s = "";
  for(int i=1 ; i <= number ; i++){
    s.append(to_string(i));
    s.append(" sheep...");
  }
  return s;
}