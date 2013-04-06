#include "demineur.h"
void 	flushTab(CI **str)
{
	int i = 0, j = 0;
	while (i < 16)
	{
		while (j < 16)
		{
			str[i][j].Bombe = 0;
			j++; 
		}
		i++;
		j = 0;
	}

}
void	initialisation(CI **str, int cases)
{

	bombe(str, 16);
	int i = 0, j = 0;
	//printf("%d,cases i %d j %d \n", cases, i , j);	

	while (i < 16)
	{
		while (j < 16 )
		{
			str[i][j].ouvert = 0;
			if (str[i][j].Bombe != 1)
				str[i][j].Bombe = 0;
			//printf("i %d j %d \n",i, j);
			j++;
		}
		j= 0;
		i++;
	}
	i = 0, j = 0;
	while(i < 16)
	{
		while(j < 16)
		{
			str[i][j].nbrBombe = tour_case(str, i, j, 16);
			j++;

		}

		j = 0;
		i++;
	}

}

