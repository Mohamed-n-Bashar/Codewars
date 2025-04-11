#include <string>

bool feast(std::string beast, std::string dish){
  if(beast[beast.size()-1] == dish[dish.size()-1] && beast[0] == dish[0])
    return true;
  return false;
}