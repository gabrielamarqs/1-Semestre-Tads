//lista 6 - Exercício 5


#include <stdio.h>

int main(int argc, char **argv)
{
	int num;
	do {
		printf ("Informe um número entre 0 e 10: ");
		scanf ("%d", &num);
	} while (num >= 0 && num <= 10);
		printf ("Número fora do intervalo.");
		
	return 0;
}

