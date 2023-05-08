
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	double a;
	printf ("Digite um número real: ");
	scanf ("%lf", &a);
	if (a <= 0)
		printf ("que ao quadrado é igual a: %.0f\n", pow(a,2));
	else 
		printf ("e sua raiz quadrada é igual a: %.0f\n", sqrt (a) );
	return 0;
}

