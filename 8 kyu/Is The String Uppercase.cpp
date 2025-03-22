#include <string>

bool is_uppercase(const std::string &s) {
  bool caps = true;
  for(int i=0 ; i < s.length(); i++){
    if(islower(s[i]))
      caps = false;
  }
  return caps;
}

//========================================

#include <algorithm>

bool is_uppercase(const std::string &s) {
  return std::none_of(s.begin(), s.end(), islower);
}