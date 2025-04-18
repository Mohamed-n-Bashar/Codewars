#include <string>
using namespace std;
bool isPalindrom (string str)
{
  for(char &c : str){
    c = tolower(c);
  }
  for(int i=0 ; i<str.size() ; i++){
    if(str[i] != str[str.size()-i-1])
      return false;
  }
  return true;
}



//====================================================



#include <string>
using namespace std;

bool isPalindrom (const string& str) {
  string lstr = str;
  for (char& c : lstr) c = toupper(c);
  return lstr == string(lstr.rbegin(), lstr.rend());
}