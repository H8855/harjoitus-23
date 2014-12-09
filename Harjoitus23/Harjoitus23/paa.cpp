#include "maarittely.h"
void main()
{
	int valinta = 1, lkm = 2, i = 0;
	HKL henkilo[10] = { { "Matti", 12.5, 23 }, { "Mikko", 43.6, 12 } };

	while (valinta != 0)
	{
		valinta = Valikko();
		switch (valinta)
		{
		case 0: valinta = 0; break;
		case 1: LisaaHenkilo(henkilo, &lkm); break;
		case 2: TulostaKaikkiHenkilot(henkilo, lkm);
			break;
		}
	}
}
