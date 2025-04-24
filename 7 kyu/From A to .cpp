#include <string>
using namespace std;

string gimme_the_letters(const string& sp)
{
    string letters;
    for (size_t i=sp[0]; i<=sp[2]; i++) {
        letters += i;
    }
    return letters;
}