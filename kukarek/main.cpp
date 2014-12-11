#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

void pokpok(int Kudah, ostream& kukarek)
{
	if(kukarek)
	{
		for(int ko = 0; ko < Kudah; ++ko)
		{
			kukarek << 'K' << 'o';
		}
		kukarek << " Kukarek Kudah\n";
	}
}

void kudah(istream&Ko, ostream& kO)
{
	char c;
	while (Ko && kO)
	{
		Ko >> c;
		if(Ko.good())
		{
			pokpok(c, kO);
		}
		else
		{
			pokpok(13, kO);
			pokpok(10, kO);
		}
	}
}

int main(int argc, char* argv[])
{
	string pok;
	if(2 == argc)
	{
		pok = argv[1];
		cout << argv[1] << '\n';
	}
	else
		pok = "Kud-kudah\n";
	ofstream pokpokpok("KoKoKo.txt");
	stringstream Kukarek(pok);
	kudah(Kukarek, pokpokpok);
}