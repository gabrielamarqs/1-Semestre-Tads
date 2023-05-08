/*
lista 9 - ex 1 
 */


#include <stdio.h>
#define TAM 4

int main(int argc, char **argv)
{
	float mat[8][8];
	int i, j, numM, posMi=0, posMj=0, numMe, posMei=0, posMej=0;
	for (i=0; i<TAM; i++)
	{
		for (j=0; j<TAM; j++)
		{
			printf ("Informe um número para a matriz [%d][%d]: ", i, j);
			scanf ("%f", &mat[i][j]);
		}
	}
	numM=0;
	for (i=0; i<TAM; i++)
		{
		for (j=0; j<TAM; j++)
		{
			if (mat[i][j]>numM) 
			{
				numM=mat[i][j];
				posMj=j;
				posMi=i;
			}		
		}
	}
	numMe=mat[0][0];
	for (i=0; i<TAM; i++)
		{
		for (j=0; j<TAM; j++)
		{
			if (mat[i][j]<numMe) 
			{
				numMe=mat[i][j];
				posMej=j;
				posMei=i;
			}		
		}
	}

	printf ("\n\nO maior número guardado na matriz é o %d.\n", numM);
	printf ("E este número encontra se na posição [%d][%d] da matriz.\n", posMi, posMj);
	printf ("O menor número guardado na matriz é o %d.\n", numMe);
	printf ("E este número encontra se na posição [%d][%d] da matriz.", posMei, posMej);

	return 0;
}

