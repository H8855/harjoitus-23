#include "maarittely.h"
int Valikko()
{
	int valinta;
	cout << "VALIKKO" << endl << "0 Lopeta" << endl << "1 Lisaa henkilo" << endl << "2 Nayta kaikki henkilot" << endl;
	cin >> valinta;
	return valinta;
}

void TulostaKaikkiHenkilot(HKL henkilo[], int lkm)
{
	for (int i = 0; i < lkm; i++)
	{
		cout << henkilo[i].etunimi << " " << henkilo[i].matka << " " << henkilo[i].hattu << endl;
	}
}

void LisaaHenkilo(HKL henkilo[], int *lkm)
{
	(*lkm)++;
	cout << "Etunimi: "; cin >> henkilo[(*lkm) - 1].etunimi;
	cout << "Koulumatka: "; cin >> henkilo[(*lkm) - 1].matka;
	cout << "Hatun koko: "; cin >> henkilo[(*lkm) - 1].hattu;
}