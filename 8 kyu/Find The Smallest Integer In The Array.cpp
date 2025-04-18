#include <vector>

using namespace std; 

int findSmallest(vector <int> list)
{
  int min = list[0];
  for(int i=0 ; i<list.size() ; i++){
    if(list[i] < min)
      min = list[i];
  }
  return min ;
}


//========================================================


#include <vector>
#include <algorithm>
using namespace std; 

int findSmallest(vector <int> list)
{
  sort(list.begin() , list.end());
  return list[0];
  }