#include <algorithm>

unsigned short expressionsMatter(unsigned short a, unsigned short b, unsigned short c) {
  return std::max({a + b + c, a * (b + c), (a + b) * c, a * b * c});
}


//=======================================================================


unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c)
{
  std::vector<int> v(5);
  v[0] = a * (b + c);
  v[1] = a * b * c;
  v[2] = a + b + c;
  v[3] = a + b * c;
  v[4] = (a + b) * c;
  sort(v.begin(), v.end());
  return v[4] ; 
}