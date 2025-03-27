
//=========================Dart==========================
String abbrevName(String name) {
  List<String> n = name.split(" ");
  
  return n[0][0].toUpperCase() + "." + n[1][0].toUpperCase();
}


//=========================C++===========================
#include <string>

std::string abbrevName(std::string name)
{
  std::string ret;
  ret.push_back(toupper(name[0]));
  ret.push_back('.');
  ret.push_back(toupper(name[name.find(' ') + 1] ));
  return ret;
}