#include <stdio.h>

int main(int argc, char **argv)
{
	int num;
	printf ("Digite um número inteiro para descobrir se ele é impar ou par: ");
	scanf ("%d", &num);
	if (num > 0)
		printf ("Positivo\n");
	else
		if (num == 0)
		printf ("Nulo\n");
		else 
		printf ("Negativo\n");
	return 0;
}

