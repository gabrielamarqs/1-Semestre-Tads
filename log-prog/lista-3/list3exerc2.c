#include <stdio.h>

int main(int argc, char **argv)
{
	int num, resto;
	printf ("Digite um número inteiro: ");
	scanf ("%d", &num);
	resto = num % 3;
	if (resto == 0)
		printf("Este número é múltiplo de 3.");
	else 
		printf("Este número não é múltiplo de 3.");
	return 0;
}

