/*
lista 9 - exercício 3
 */


#include <stdio.h>
#define TAM 100

int main(int argc, char **argv)
{
	int matA[TAM][TAM], matB[TAM][TAM], matC[TAM][TAM];
	int i, j, m, n, a, b;
	printf ("Informe um número para ser a quantidade de linhas da matriz: ");
	scanf ("%d", &m);
	printf ("Informe um número para ser a quantidade de linhas da matriz: ");
	scanf ("%d", &n);

	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			printf ("Informe um número para a matriz A [%d][%d]: ", i, j);
			scanf ("%d", &matA[i][j]);
		}
	}
	
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
		{
			printf ("Informe um número para a matriz B [%d][%d]: ", i, j);
			scanf ("%d", &matB[i][j]);
		}
	}
	
	printf ("\nA matriz C será a soma da matriz A com a matriz B.\n");
	printf ("\nMatriz C\n");

	for (i=0; i<m; i++)
	{
		printf ("\n");
		for (j=0; j<n; j++)
		{
			a = matA[i][j];
			b = matB[i][j];
			matC[i][j] = a+b;
			printf ("[%d][%d] %d \t", i, j, matC[i][j]);
		}
	}


	return 0;
}

