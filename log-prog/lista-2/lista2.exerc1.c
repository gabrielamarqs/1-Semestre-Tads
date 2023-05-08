#include <stdio.h>

int main()
{
	float valPag, valProd, troco;
	printf ("Digite o valor pago=");
	scanf ("%f",&valPag);
	printf ("Digite o valor do produto=");
	scanf ("%f",&valProd);
	troco=valPag-valProd;
	printf ("Troco= %.2f", troco);	
	return 0;
}

