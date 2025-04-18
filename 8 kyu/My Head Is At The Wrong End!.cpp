#include <array>
#include <string>

std::array<std::string, 3> fixTheMeerkat(const std::array<std::string, 3>& xs) {
  return {xs[2], xs[1], xs[0]};
}



//===============================================================



#include <array>
#include <string>
using namespace std;

array<string, 3> fixTheMeerkat(array<string, 3> arr) {
  array<string, 3> temp;
  int i = 0;
  for(auto it= arr.rbegin(); it< arr.rend(); it++){
    temp[i++] = *it;
  }
  return temp;
}