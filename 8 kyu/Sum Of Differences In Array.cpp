#include <vector>
#include <algorithm>
using namespace std;
int sumOfDifferences(vector<int> arr){
  int n = 0;
  sort(arr.begin(), arr.end());
  if(arr.size() <= 1)
    return n;
  for(int i=0; i < arr.size()-1; i++){
    n += arr[arr.size()-i-1] - arr[arr.size()-i-2];
  }
  return n;
}


// max - min