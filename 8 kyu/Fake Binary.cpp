#include <string>

std::string fakeBin(std::string str){
  std::string ns = "";
  for(int i=0 ; i<str.size(); i++){
    if(str[i]-'0' < 5)
      ns.append("0");
    else
      ns.append("1");
  }
  return ns;
}