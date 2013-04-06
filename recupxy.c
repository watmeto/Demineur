#include "demineur.h"
// revoie -1 si cliké sur une bombe
int recupxy(CI **str)
{
	int continuer = 0, x = -1, y = -1;
	SDL_Event eventa;

	while(continuer == 0)
	{
		SDL_WaitEvent(&eventa);

		switch(eventa.type)
		{
			case SDL_MOUSEBUTTONUP:
				if (eventa.button.button == SDL_BUTTON_LEFT)
				{
					y = ((eventa.button.x -343)/17);
					x = ((eventa.button.y - 214)/17);
					if ((x >= 0 && x < 16) && (y >= 0 && y < 16))
						continuer = 1;
					break;


				}
				if (eventa.button.button == SDL_BUTTON_RIGHT)
				{
					y = ((eventa.button.x -343)/17);
					x = ((eventa.button.y - 214)/17);
					if ((x >= 0 && x < 16) && (y >= 0 && y < 16))
						continuer = 2;

				}
				break;

			case SDL_QUIT:
				return(3);


		}
	}
	//affichage(tab2, ecran);
	//printf("dans la boucle x %d y %d continuer %d \n",x, y, continuer);

	if (continuer == 2)
		if (str[x][y].ouvert == 0)
			str[x][y].ouvert = 2;
		else if (str[x][y].ouvert == 2)
			str[x][y].ouvert = 0;

	if (str[x][y].nbrBombe == 0 && continuer == 1 && str[x][y].ouvert != 2)
	{
		str[x][y].ouvert = 1;
		ouvrir(str, x, y);
	}
	else if (continuer != 2 && str[x][y].ouvert != 2)
		str[x][y].ouvert = 1;	
	if (str[x][y].Bombe == 1 && continuer == 1 && str[x][y].ouvert == 1)
		return (0); 

	return(1);
}
int 	win(CI **str)
{
	int i = 0, j = 0, casesSuspecte = 0, caseOuverte = 0, bombe = 0;

	while (i < 16)
	{
		while (j < 16)
		{
			if (str[i][j].Bombe == 1)
				bombe++;

			j++; 
		}
		i++;
		j = 0;
	}
	i = 0, j = 0, casesSuspecte = 0, caseOuverte = 0;
	while (i < 16)
	{
		while (j < 16)
		{
			if (str[i][j].ouvert == 2 && str[i][j].Bombe == 1)
				casesSuspecte += 1;
			//if (str[i][j].ouvert == 1)
			else if (str[i][j].ouvert == 1)
				caseOuverte += 1;

			j++; 
		}
		i++;
		j = 0;
	}
	//printf("ouvert %d casesSuspecte %d  bombe %d\n",caseOuverte, casesSuspecte, bombe );
	//Lif (caseOuverte ==209 && casesSuspecte == 16)
	if (caseOuverte == 256 - bombe  && casesSuspecte == bombe)
		return(1);
	else
		return (0);


}



