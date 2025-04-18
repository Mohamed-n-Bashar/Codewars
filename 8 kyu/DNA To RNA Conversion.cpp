std::string DNAtoRNA(std::string dna){
  std::replace(dna.begin(), dna.end(), 'T', 'U');
  return dna;
}


//==============================================


#include <string>
using namespace std;

string DNAtoRNA(string dna){
 	for (int i = 0; i < dna.size(); i++)
	{
		if (dna[i] == 'T')
			dna[i] = 'U';
	}
	return dna;
}