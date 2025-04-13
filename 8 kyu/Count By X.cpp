#include <vector>
std::vector<int> countBy(int x,int n){
  std::vector<int> v;
  int step = x;
  for(int i=0 ; i<n ; i++){
    v.push_back(x);
    x += step;
  }
  return v;
}