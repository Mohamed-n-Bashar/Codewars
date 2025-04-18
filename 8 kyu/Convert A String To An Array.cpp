#include <vector>
#include <string>
using namespace std;

vector<string> string_to_array(string s) {
  vector<string> res;
  string temp = "";
  for(char i : s){
    if(i != ' ')
      temp.push_back(i);
    else{
      res.push_back(temp);
      temp = "";
    }
  }
  res.push_back(temp);
  return res;
}