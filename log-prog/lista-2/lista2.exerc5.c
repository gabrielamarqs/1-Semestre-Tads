#include <stdio.h>

int main(int argc, char **argv)
{
	float valor, parcela; 
	scanf ("%f", &valor);
	parcela=valor/5;
	printf ("compra parcelada \n 5 x %.2f = %.2f", parcela, valor);
	return 0;
}

