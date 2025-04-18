std::vector<int> divisible_by(std::vector<int> numbers, int divisor)
{
  std::vector<int> res;
  for(int i=0; i<numbers.size(); i++){
    if(numbers[i] % divisor == 0)
      res.push_back(numbers[i]);
  }
  return res;
}