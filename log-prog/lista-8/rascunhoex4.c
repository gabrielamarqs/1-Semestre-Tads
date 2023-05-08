/*
lista 8 - exerc 4
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	float alun[4], media;
	int i, soma=0, b=0;
	for (i=0; i<4; i++)
	{
		printf ("Informe a nota do aluno: ");
		scanf ("%f", &alun[i]);
	}
		for (i=0; i<4; i++)
	{
		soma = soma + alun[i];
		printf ("soma %d\n", soma);
	}
		media = (float)soma/4;
		printf ("A média da turma é: %.2f", media);
	for (i=0; i<4; i++)
	{
		if (alun[i]>media){
			b++;}
	}
	printf ("\nA quantidade de alunos que obtiveram notas acima da média é: %d", b);
	return 0;
}
