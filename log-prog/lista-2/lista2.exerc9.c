#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	float num;
	printf ("Digite um número com casas decimais (utilize ponto em vez da vírgula = ");
	scanf ("%f", &num);
	printf ("Esse número arredondado para cima = %.0f\ne arredondado para baixo = %.0f", ceil (num), floor (num));
	return 0;
}

