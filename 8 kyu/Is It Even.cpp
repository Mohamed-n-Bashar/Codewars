#include <cmath>

bool is_even(double n)
{
  if(n != ceil(n)) return 0;
  return int(n) % 2 == 0 ? 1 : 0 ;
}


//=============================================



#include <cmath>

bool is_even(double n)
{
    return fmod(n, 2) == 0;
}