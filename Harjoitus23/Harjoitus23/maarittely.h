#include <iostream>
using namespace std;

struct HKL
{
	char etunimi[20];
	float matka;
	int hattu;
};

int Valikko();
void TulostaKaikkiHenkilot(HKL henkilo[], int lkm);
void LisaaHenkilo(HKL henkilo[], int *lkm);
