#include <string>
using namespace std;

string no_space(const string& x)
{
  string y;
  for(int i=0 ; i < x.size(); i++){
    if(x[i] == ' ')
      continue;
    y += x[i];
  }
   return y;
}