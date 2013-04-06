#include "demineur.h"
int	tour_case(CI **tab, int x, int y, int cases)
{
	int cpt =	 0;
	//coté droit
	if ((y+1 < cases) && tab[x][y+1].Bombe == 1)
		cpt++;
	if ((x+1 < cases && y+1 < cases) && tab[x+1][y+1].Bombe == 1)
		cpt++;
	if ((x-1 >= 0 && y+1 < cases) && tab[x-1][y+1].Bombe == 1)
		cpt++;
	// haut bat
	if ((x-1 >= 0) && tab[x-1][y].Bombe == 1)
		cpt++;
	if ((x+1 < cases) &&tab[x+1][y].Bombe == 1)
		cpt++;
	//coté gauche
	if ((y-1 >= 0) && tab[x][y-1].Bombe == 1)
		cpt++;
	if ((x-1 >= 0 && y-1 >= 0) &&tab[x-1][y-1].Bombe == 1)
		cpt++;
	if ((x+1 < cases && y-1 >= 0) && tab[x+1][y-1].Bombe == 1)
		cpt++;


	return (cpt);

}
