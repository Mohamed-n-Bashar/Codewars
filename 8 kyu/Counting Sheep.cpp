#include <vector>

using namespace std; 

int count_sheep(vector<bool> arr) 
{
  int count = 0;
  for(int i = 0 ; i < arr.size() ; i++){
    arr[i] ? count++ : count;
  } 
  return count;
}

//======================================

#include <algorithm>

int count_sheep(vector<bool> v) {
  return count(v.cbegin(), v.cend(), true);
}