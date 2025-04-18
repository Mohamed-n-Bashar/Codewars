using namespace std;

vector<int> digitize(unsigned long n) {
  vector<int> res;
  if(n == 0) return {0};
  int i = 10;
  while(n > 0){
    res.push_back(n%i);
    n /= 10;
  }
  return res;
}