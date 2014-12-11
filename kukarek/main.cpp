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

void Kudaah(int pok, int pokpok, ostream& kukarek)
{
	string ko;
	int Kud_kudah = 0;
	if(pok < pokpok)
	{
		ko = "Ko";
		Kud_kudah = pokpok - pok;
	}
	else
	{
		ko = "kO";
		Kud_kudah = pok - pokpok;
	}
	for(int Kukarek= 0; Kukarek< Kud_kudah; ++Kukarek)
		kukarek << ko;
	kukarek << " Kukarek\n";

}

void kudah(istream&Ko, ostream& kO)
{
	char c = 0;
	char c0 = 0;
	while (Ko && kO)
	{
		c0 = c;
		Ko >> c;
		if(Ko.good())
		{
			Kudaah(c0, c, kO);
		}
		else
		{
			
			Kudaah(c, 13, kO);
			Kudaah(13, 10, kO);
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
		pok = "Kud_kudah\n";
	ofstream pokpokpok("KoKoKo.txt");
	stringstream Kukarek(pok);
	kudah(Kukarek, pokpokpok);
}