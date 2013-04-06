#include "demineur.h"
int 	oui(int i, int j, int cases)
{
	if (i > 0 && i < cases && j > 0 && j < cases)
		return (1);
	else
		return (0);
}
char  	**ouvrir(CI **tab, int I, int J)
{
	int cases = 16;
	int i = I, j = J, a = 0, b = 0, c =0, d = 0, haut;
	int flag;
	/// coté droit
	while(tab[i][j+1].Bombe == 0 && j < cases)
	{
		if (tab[i][j+1].ouvert == 0)
			tab[i][j+1].ouvert = 1;
		// ouverture vers coté droit
		haut = i;
		flag = 0;

		while (haut < cases && flag == 0)
		{
			if (tab[haut][j].nbrBombe != 0)
			{
				flag = 1;
				if (tab[haut][j].ouvert == 0)
					tab[haut][j].ouvert = 1;
			}
			if (tab[haut][j].nbrBombe == 0 && tab[haut][j].ouvert == 0)
				tab[haut][j].ouvert = 1;

			haut++;
		}	
		haut = i;
		flag = 0;
		while (haut > 0 && flag == 0)
		{
			if (tab[haut][j].nbrBombe != 0)
			{
				flag = 1;
				if (tab[haut][j].ouvert == 0)
					tab[haut][j].ouvert = 1;
			}
			if (tab[haut][j].nbrBombe == 0 && tab[haut][j].ouvert == 0)
				tab[haut][j].ouvert = 1;
			haut--;
		}	

		j++;
		if(tab[i][j].nbrBombe != 0)
		{
			a = 1;
			break;
		}
	}

	i = I, j = J;
	//coté gauche
	while(tab[i][j-1].Bombe == 0 && j < cases && b == 0)
	{ 
		/////////////////////////////////////////
		if (tab[i][j-1].ouvert == 0)
			tab[i][j-1].ouvert = 1;
		haut = i;
		flag = 0;

		while (haut < cases && flag == 0)
		{
			if (tab[haut][j].nbrBombe != 0)
			{	
				flag = 1;
				if (tab[haut][j].ouvert == 0)
					tab[haut][j].ouvert = 1;
			}
			if (tab[haut][j].nbrBombe == 0 && tab[haut][j].ouvert == 0 )
				tab[haut][j].ouvert = 1;

			haut++;

		}	
		haut = i;
		flag = 0;

		while (haut > 0 && flag == 0)
		{
			if (tab[haut][j].nbrBombe != 0)
			{
				flag = 1;
				if (tab[haut][j].ouvert == 0)
					tab[haut][j].ouvert = 1;
			}
			if (tab[haut][j].nbrBombe == 0 && tab[haut][j].ouvert == 0 )
				tab[haut][j].ouvert = 1;

			haut--;
		}	


		j--;
		if(tab[i][j].nbrBombe != 0)
		{
			b = 1;
			break;
		}
	}











































	/*
	   while(tab[i][j+1].Bombe == 0 && j < cases)
	   {
	   tab[i][j+1].ouvert = 1;
	// ouverture vers coté droit
	haut = i;
	flag = 0;

	while (haut < cases && flag == 0)
	{
	if (tab[haut][j].nbrBombe != 0)
	flag = 1;
	if (tab[haut][j].nbrBombe == 0 )
	tab[haut][j].ouvert = 1;
	else
	{
	flag = 1;
	tab[haut][j].ouvert = 1;			
	}
	haut++;
	}	
	haut = i;
	flag = 0;

	while (haut > 0 && flag == 0)
	{
	if (tab[haut][j].nbrBombe != 0)
	flag = 1;
	if (tab[haut][j].nbrBombe == 0)
	tab[haut][j].ouvert = 1;
	else
	{
	flag = 1;
	tab[haut][j].ouvert = 1;			
	}
	haut--;
	}	


	j++;
	if(tab[i][j].nbrBombe != 0)
	{
	a = 1;
	break;
	}
	}

	i = I, j = J;
	//coté gauche
	while(tab[i][j-1].Bombe == 0 && j < cases && b == 0)
	{ 
	/////////////////////////////////////////
	if (tab[i][j-1]. ouvert == 0)
	tab[i][j-1].ouvert = 1;
	haut = i+1;
	flag = 0;

	while (haut < cases && flag == 0)
	{
	if (tab[haut][j].nbrBombe != 0)
	flag = 1;
	if (tab[haut][j].nbrBombe == 0 && tab[haut][j].ouvert == 0 )
	if (tab[haut][i].ouvert == 0)
	tab[haut][j].ouvert = 1;
	else
	{
	flag = 1;
	if (tab[haut][i].ouvert == 0)
	tab[haut][j].ouvert = 1;			
	}
	haut++;

}	
haut = i-1;
flag = 0;

while (haut > 0 && flag == 0)
{
	if (tab[haut][j].nbrBombe != 0)
		flag = 1;
	if (tab[haut][j].nbrBombe == 0 && tab[haut][j].ouvert == 0 )
		if (tab[haut][i].ouvert == 0)
			tab[haut][j].ouvert = 1;
		else
		{
			flag = 1;
			if (tab[haut][i].ouvert == 0)
				tab[haut][j].ouvert = 1;			
		}
	haut--;
}	


j--;
if(tab[i][j].nbrBombe != 0)
{
	b = 1;
	break;
}
}
*/

}
