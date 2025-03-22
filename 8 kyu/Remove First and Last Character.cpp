#include <string>

using namespace std; 

string sliceString (string str )
{
  string Nstr = "";
  for(int i=1 ; i < str.size()-1; i++){
    Nstr += str[i];
  }
  return Nstr ; 
}