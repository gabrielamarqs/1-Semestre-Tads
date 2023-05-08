/*
Lista 8 - Exercício 6
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int vetor1[100], i, numMe, pos=0;
	for (i=0; i<20; i++)
	{
		printf ("Informe um número para a posição %d: ", i+1);
		scanf ("%d", &vetor1[i]);
		if (vetor1[i]>=0){
			continue;}
		else {
			printf ("\nInforme somente números positivos.\n");
			break;}
	}
	numMe=vetor1[0];
	for (i=1; i<20; i++)
	{
		if (vetor1[i]<numMe) 
		{
			numMe=vetor1[i];
			pos=i;
		}
	}
		printf ("\nO menor número informado foi o %d e que se encontra na posição %d do vetor.", numMe, pos+1);

	return 0;
}

