#include<vector>
#include<algorithm>

int repeats(std::vector<int>v){
  int c = 0;
  for (int e : v)
    c += e * (std::count (v.begin(), v.end(), e) == 1);   
  return c;      
}


//==========================================



#include<algorithm>
int repeats(std::vector<int>v){
  sort(v.begin(), v.end());
  int t = 0;
  for(int i=0 ; i<v.size() ; i++)
  if(v[i] == v[i+1]){
    i += 1;
    continue;
  }
  else{
    t += v[i];
  }
  return t;
}