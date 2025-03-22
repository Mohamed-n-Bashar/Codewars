#include <utility>
using namespace std;

pair<int, int> swap_values(pair<int, int> values) {
  int step;
  step = values.second;
  values.second = values.first;
  values.first = step;
  return values;
}

//================================================

#include <utility>

pair<int, int> swap_values(pair<int, int> values) {
  swap(values.first, values.second);
  return values;
}