#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	float x, raiz;
	printf ("Informe o valor de x=");
	scanf ("%f", &x);
	raiz = sqrt (x);
	printf ("A raiz quadrada de %.0f é = %.0f", x, raiz);
	return 0;
}

