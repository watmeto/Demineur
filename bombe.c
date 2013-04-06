#include<stdio.h>
#include<time.h>
#include "demineur.h"
char **bombe(CI **str, int cases)
{
	int i = 0, j = 0, k = 0;
	srand(time(NULL));
	while (k < cases)
	{
		i = rand() % cases;
		j = rand() % cases;
		str[i][j].Bombe = 1;
		k++;
		//return (str);
	}
}
