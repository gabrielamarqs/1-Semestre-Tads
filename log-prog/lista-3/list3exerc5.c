#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c, delta;
	printf ("Informe os coeficientes da seguinte função Delta = b² - 4 a c: \n");
	printf ("Informe o quociente a= ");
	scanf ("%d", &a);
	printf ("Informe o quociente b= ");
	scanf ("%d", &b);
	printf ("Informe o quociente c= ");
	scanf ("%d", &c);
	delta = b * b - 4 * a * c;
	if (delta >= 0)
		printf ("O valor de delta é= %d", delta);
	else 
		printf ("A equação não tem solução real.");
	return 0;
}

