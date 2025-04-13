#include <vector>
#include <string>
using namespace std;

string howManyDalmatians(int number){
  vector<string> dogs = { "Hardly any", "More than a handful!" , "Woah that's a lot of dogs!", "101 DALMATIONS!!!" };
  return number <= 10 ? dogs[0] : number <= 50 ? dogs[1] : number == 101 ? dogs[3] : dogs[2];
}

//===================================================================

std::string howManyDalmatians(int number)
{
 switch(number){
   case 1  ... 10: return "Hardly any";
   case 11 ... 50: return "More than a handful!";
   case 51 ... 100: return "Woah that's a lot of dogs!";
   default: return "101 DALMATIONS!!!";
 }
}