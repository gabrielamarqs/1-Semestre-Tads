/*
Lista 8 - Exercício 7
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int vetor1[100], i, numM=0, posM=0, numMe, posMe=0;
	for (i=0; i<4; i++)
	{
		printf ("Informe um número para a posição %d: ", i+1);
		scanf ("%d", &vetor1[i]);
		if (vetor1[i]>=0){
			continue;}
		else {
			printf ("\nInforme somente números positivos.\n");
			break;}
	}
	for (i=0; i<4; i++)
	{
		if (vetor1[i]>numM) 
		{
			numM=vetor1[i];
			posM=i;
		}
	}
	numMe=vetor1[0];
	for (i=1; i<4; i++)
	{
		if (vetor1[i]<numMe) 
		{
			numMe=vetor1[i];
			posMe=i;
		}
	}

		printf ("\nO maior número informado foi o %d e que se encontra na posição %d do vetor.", numM, posM+1);
		printf ("\nO menor número informado foi o %d e que se encontra na posição %d do vetor.", numMe, posMe+1);

	return 0;
}

