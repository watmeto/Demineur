#include "demineur.h"

int	main()
{
	int i = 0, j = 0, cases = 16, jouer = 1, rejouer = 1, wins = 0, loose = 0;
	CI **str;
	SDL_Surface *ecran = NULL, *fond = NULL, *intello = NULL, *transparent = NULL;
	SDL_Init(SDL_INIT_VIDEO);
	ecran = SDL_SetVideoMode(640, 500,32, SDL_HWSURFACE | SDL_DOUBLEBUF);
	SDL_Rect positionFond, positionIntello, posTrans;
	positionFond.x = 0;
	positionFond.y = 0;
	positionIntello.x = 50;
	positionIntello.y = 240;
	posTrans.x = 50;
	posTrans.y = 240;
	SDL_Event event;
	if (ecran ==  NULL)
	{
		printf("Error initialisation \n");
		exit(EXIT_FAILURE);
	}

	SDL_WM_SetCaption("Demineur By W@TM£T0",NULL);
	fond = IMG_Load("img/fond.jpg");
	intello = IMG_Load("img/intello.jpg");	
	transparent = IMG_Load("img/posTrans.png");
	SDL_BlitSurface(fond,NULL,ecran, &positionFond);
	SDL_BlitSurface(intello,NULL,ecran, &positionIntello);
	SDL_Flip(ecran);
	str = malloc(sizeof(CI)*19);
	while (i < cases)
	{
		str[i] = malloc(sizeof(CI)*(19));
		i++;
	}

	while (rejouer)
	{
		SDL_BlitSurface(fond,NULL,ecran, &positionFond);
			SDL_BlitSurface(intello,NULL,ecran, &positionIntello);
		flushTab(str);
		initialisation(str, cases);
		while (jouer)
		{
			affichage(ecran, str);			
			SDL_Flip(ecran);
			loose = recupxy(str);
			wins = win(str);
			SDL_Flip(ecran);
			if (loose == 3)
			{
				exit(EXIT_SUCCESS);
				SDL_Quit();
			}

			if (loose == 0 || wins == 1)
				jouer =0;
		}
		if (loose == 0)
		{
			SDL_BlitSurface(fond,NULL,ecran, &positionFond);
			looseFin(str, ecran);
						
		}
		else 	
		{
			SDL_BlitSurface(fond,NULL,ecran, &positionFond);
			winFin(str, ecran);
			
		}
		jouer = 1;
		pause(rejouer);
	}
	exit(EXIT_SUCCESS);
	SDL_Quit();
	return 0;
}



void pause(int a)
{
	int continuer = 1;
	SDL_Event event;

	while (continuer)
	{
		SDL_WaitEvent(&event);
		switch(event.type)
		{
			case SDL_QUIT:
				a = 0;
				continuer = 0;
				exit(EXIT_SUCCESS);
				break;
			case SDL_KEYDOWN:
				a = 1;
				continuer = 0;
				break;
		}
	}
}

