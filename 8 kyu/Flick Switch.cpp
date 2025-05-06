#include <vector>
#include <string>
using namespace std;

vector<bool> flick_switch(vector<string> arr)
{
  vector<bool> res;
  bool val = true;
  for(int i=0 ; i<arr.size() ; i++){
    if(arr[i] == "flick")
      val = !val;
    
    res.push_back(val);
  }
  return res;
}