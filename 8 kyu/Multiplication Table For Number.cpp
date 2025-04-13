#include <string>
using namespace std;
string multi_table(int number)
{
  string table = "";
  for(int i=1 ; i <= 10 ; i++){
    table.append(to_string(i) + " * " + to_string(number) + " = " + to_string(i*number));
    if(i != 10) table.append("\n"); 
  }
  return table;
}