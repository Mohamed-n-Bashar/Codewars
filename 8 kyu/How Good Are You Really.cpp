#include <vector>
#include <numeric>
using namespace std;

bool betterThanAverage(vector<int> classPoints, int yourPoints) {
  int average = accumulate(classPoints.begin(), classPoints.end(), 0) / classPoints.size();
  return average < yourPoints;
}