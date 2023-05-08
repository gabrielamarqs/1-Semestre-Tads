#include <stdio.h>

int main(int argc, char **argv)
{
	int num;
	printf ("Digite um número inteiro e verifique se ele está no intervalo permitido: ");
	scanf ("%d", &num);
	if (num < 10)
		printf ("Número não está no intervalo permitido.");
	else 
		if ((num >= 10)&&(num <= 100))
			printf ("Número está entre 10 e 100 - intervalo permitido.");
		else 
			printf ("Número não está no intervalo permitido.");
	return 0;
}

