#include "demineur.h"
void	affichage(SDL_Surface *ecran, CI** str)
{

int i = 0, j = 0;
SDL_Surface *clos, *m1, *m2, *m3, *m4, *m5, *m6, *m7, *m8, *rien, *mine, *drapeau, *bombes;
clos = IMG_Load("img/NonOuvert.bmp");
mine = IMG_Load("img/mine.bmp");
m1 = IMG_Load("img/1.bmp"), m2 = IMG_Load("img/2.bmp"), m3 = IMG_Load("img/3.bmp"), m4 = IMG_Load("img/4.bmp"), m5 = IMG_Load("img/5.bmp"),m6 = IMG_Load("img/6.bmp"),
m7 = IMG_Load("img/7.bmp"), m8 = IMG_Load("img/8.bmp"), rien = IMG_Load("img/rien.bmp"), drapeau = IMG_Load("img/drapeau.bmp"), bombes = IMG_Load("img/mine.bmp");
SDL_Rect positionClos;
positionClos.x = 640/2 + 17 ;
positionClos.y = 500/2 - 36;

	while(i < 16)
	{
		while(j < 16)
		{

			if (str[i][j].ouvert == 0 )
			{
			SDL_BlitSurface(clos, NULL, ecran, &positionClos);
			positionClos.x += 17;
			}
			else if (str[i][j].ouvert == 2 )
			{
				SDL_BlitSurface(drapeau, NULL, ecran, &positionClos);
					positionClos.x += 17;
			}
			else if (str[i][j].ouvert != 2)
			{
				if (str[i][j].nbrBombe == 0 )
					{
						SDL_BlitSurface(rien, NULL, ecran, &positionClos);
						positionClos.x += 17;
					}
				else if (str[i][j].nbrBombe == 1)
				{
					SDL_BlitSurface(m1, NULL, ecran, &positionClos);
					positionClos.x += 17;
				}
				
				else if (str[i][j].nbrBombe == 2 )
					{
						SDL_BlitSurface(m2, NULL, ecran, &positionClos);
						positionClos.x += 17;
					}
				else if (str[i][j].nbrBombe == 3 )
					{
						SDL_BlitSurface(m3, NULL, ecran, &positionClos);
						positionClos.x += 17;
					}
				else if (str[i][j].nbrBombe == 4 )
					{
						SDL_BlitSurface(m4, NULL, ecran, &positionClos);
						positionClos.x += 17;
					}
				else if (str[i][j].nbrBombe == 5 )
					{
						SDL_BlitSurface(m5, NULL, ecran, &positionClos);
						positionClos.x += 17;
					}
				else if (str[i][j].nbrBombe == 6 )
					{
						SDL_BlitSurface(m6, NULL, ecran, &positionClos);
						positionClos.x += 17;
					}
				else if (str[i][j].nbrBombe == 7 )
					{
						SDL_BlitSurface(m7, NULL, ecran, &positionClos);
						positionClos.x += 17;
					}
				else if (str[i][j].nbrBombe == 8 )
					{
						SDL_BlitSurface(m8, NULL, ecran, &positionClos);
						positionClos.x += 17;
					}
			}
			

				j++;	
		}
		j=0;
		positionClos.x = 640/2 + 17;
		positionClos.y +=17;
		i++;

	}

}

