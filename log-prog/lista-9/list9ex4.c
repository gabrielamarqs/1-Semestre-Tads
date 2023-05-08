/*
lista 9 - exercício 4
 */


#include <stdio.h>
#define TAM 100

int main(int argc, char **argv)
{
	int matA[TAM][TAM], matT[TAM][TAM];
	int i, j, m, n;
	printf ("Informe um número para ser a quantidade de linhas da matriz: ");
	scanf ("%d", &m);
	printf ("Informe um número para ser a quantidade de colunas da matriz: ");
	scanf ("%d", &n);

	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			printf ("Informe um número para a matriz A [%d][%d]: ", i, j);
			scanf ("%d", &matA[i][j]);
		}
	}

	printf ("A matriz T transposta é igual a: ");

	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			matT[j][i]=matA[i][j];
		}
	}
	
	for (i=0; i<n; i++)
	{
		printf ("\n");
		for (j=0; j<m; j++)
		{
			printf ("[%d][%d] %d: ", i, j, matT[i][j]);
		}
	}

	return 0;
}

