#include "demineur.h"
void winFin(CI **str, SDL_Surface *ecran)
{
	printf("you win\n");
	SDL_Surface *welldone, *texte;
	welldone = IMG_Load("img/welldone.png");
	SDL_Rect posImage;
	posImage.x = 60;
	posImage.y = 200;
	SDL_BlitSurface(welldone, NULL, ecran, &posImage);
	TTF_Init();
	TTF_Font *police = NULL, *police2 = NULL;
	police = TTF_OpenFont("img/angelina.ttf", 65), police2 = TTF_OpenFont("img/angelina.ttf", 50);
	SDL_Color couleur = {167, 156, 156}, couleur2 = {71, 81, 213};
	texte = TTF_RenderText_Blended(police, " YOU WIN  THE GAME !", couleur);
	SDL_Rect  positionTexte;
	positionTexte.x = 30;
	positionTexte.y = 30;

	SDL_BlitSurface(texte, NULL, ecran, &positionTexte);
	positionTexte.x = 100;
	positionTexte.y = 80;
	texte = TTF_RenderText_Blended(police, "Press any key to replay", couleur2);
	SDL_BlitSurface(texte, NULL, ecran, &positionTexte);
	positionTexte.x = 100;
	positionTexte.y = 130;
	texte = TTF_RenderText_Blended(police, "or close the windows !", couleur2);
	SDL_BlitSurface(texte, NULL, ecran, &positionTexte);
	SDL_Flip(ecran);

}

