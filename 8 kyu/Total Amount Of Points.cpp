#include<string>
int points(std::array<std::string, 10> games) {
  int res = 0;
  for(int i=0 ; i<10 ; i++){
    if((games[i][0]) - (games[i][2]) > 0)
      res += 3;
    else if((games[i][0]) - (games[i][2]) == 0)
      res++;
  }
  return res;
}