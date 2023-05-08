/*
lista 8 - exerc 3
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int i=0, soma=0, mult, n, vetorX[100], vetorY[100];
	printf ("Determine o tamanho dos vetores: ");
	scanf ("%d", &n);
	for (i=0; i<n; i++)
	{
	printf ("Informe um valor para o vetor X: ");
	scanf ("%d", &vetorX[i]);
	printf ("Informe um valor para o vetor Y: ");
	scanf ("%d", &vetorY[i]);
	}
	for (i=0; i<n; i++)
	{
	mult = vetorX[i] * vetorY[i];
	soma = soma + mult; 
	}
	printf ("Produto escalar= %d", soma);
	return 0;
}

