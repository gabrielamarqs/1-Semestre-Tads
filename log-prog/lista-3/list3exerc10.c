//colocar os printf e boa 

#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b;
	printf ("Informe um número de 3 dígitos: ");
	scanf ("%d", &a);
	b = ( a / 100 ) % 2;
	
	if (b == 0)
		printf ("O número %.0d é par.", a/100);
	else 
		printf ("O número %.0d é ímpar.", a/100);
	return 0;
}

