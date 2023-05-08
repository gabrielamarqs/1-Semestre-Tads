/*
 lista 9 - exercício 2
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	float mat[3][3];
	int i, j, n;
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("Informe um número para a matriz [%d][%d]: ", i, j);
			scanf ("%f", &mat[i][j]);
		}
	}
	
	printf ("\nInforme um número (de 0 a 2): ");
	scanf ("%d", &n);

	for (j=0; j<3; j++)
	{
		printf ("%.2f ", mat[n][j]);
	}

	return 0;
}

