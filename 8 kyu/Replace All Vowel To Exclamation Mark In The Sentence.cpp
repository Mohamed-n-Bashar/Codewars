using namespace std;

string replace(string s)
{
  string vowel = "aeiouAEIOU";
  for(int i=0 ; i<s.size() ; i++){
    for(int j=0 ; j<10 ; j++){
      if(s[i] == vowel[j])
        s[i] = '!';
    }
  }
  return s;
}



//==============================================




#include <string>
#include <regex>

using namespace std;

string replace(const string &s)
{
  return regex_replace(s, regex("[aeiouAEIOU]"), "!");
}