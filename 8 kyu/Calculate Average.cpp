#include <vector>
using namespace std;

double calcAverage(const std::vector<int>& values){
  double result = 0;
  for(int i=0 ; i < values.size() ; i++){
    result += values[i];
  }
  return result /= values.size();
}

//================================================

#include <vector>
#include <numeric>

double calcAverage(const std::vector<int>& values){
  return (double(accumulate(values.begin(), values.end(), 0)) / values.size());
}