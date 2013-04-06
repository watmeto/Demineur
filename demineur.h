#ifndef __DEMINEUR__
#define __DEMINEUR__
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

//initialisation des tableaux
//ci carte identité de chaque cases
//0 non ouvert 1 ouvert 2 suspecte--- nbrBombe donne le nbr de bombe au tour--- Bombe boolen 0 la case n estpas  une bombe 1 elle l est
void pause();
typedef struct CI CI;
struct CI
{
	int ouvert;
	int nbrBombe;
	int Bombe;
};
void	affichage(SDL_Surface *ecran, CI** str);
int 	win(CI **str);
void 	flushTab(CI **str);
void	initialisation(CI **str, int cases);
void pause(int a);
int recupxy(CI **str);
int 	win(CI **str);
void winFin(CI **str, SDL_Surface *ecran);
void looseFin(CI **str, SDL_Surface *ecran);
int	tour_case(CI **tab, int x, int y, int cases);
char  	**ouvrir(CI **tab, int I, int J);
#endif
