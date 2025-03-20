#include <string>

std::string people_with_age_drink(int age) {
  return age < 14 ? "drink toddy" : (age < 18 ? "drink coke" :(age < 21 ? "drink beer" : "drink whisky"));
}


//==========================================


std::string people_with_age_drink(unsigned int age)
{
  switch(age)
  {
      case 0  ... 13 : return "drink toddy";
      case 14 ... 17 : return "drink coke";
      case 18 ... 20 : return "drink beer";
      default        : return "drink whisky";
  }
}