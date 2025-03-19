#include <string>

unsigned int strCount(const std::string& word, char letter){
  int c = count(word.begin(), word.end(), letter);
  return c;
}