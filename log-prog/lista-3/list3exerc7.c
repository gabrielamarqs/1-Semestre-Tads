#include <stdio.h>

int main(int argc, char **argv)
{
	printf ("Informe as medidas dos lados a, b e c do triângulo: \n");
	int a, b, c;
	scanf ("%d %d %d", &a, &b, &c);
	printf ("As medidas fornecidas são a=%d, b=%d, c=%d, então ", a, b, c);
	if ((a == b) && (b == c) && (c == a))
		printf ("esse é um triângulo equilátero.");
	else
		if (((a==b)&&(b!=c)&&(c!=a))||((a!=b)&&(b==c)&&(c!=a))||((a!=b)&&(b!=c)&&(c==a)))
			printf ("esse é um triângulo isósceles.");
		else
			if ((a != b) && (b != c) && (c !=a))
				printf ("esse é um triângulo escaleno.");
			else
	return 0;
}

