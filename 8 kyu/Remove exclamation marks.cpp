#include <string>
using namespace std;

string removeExclamationMarks(string str){
  string Nstr = "";
  for(int i=0; i< str.size(); i++){
    if (str[i] == '!')
      continue;
    Nstr += str[i];
  }
  return Nstr;
}