#include <stdio.h>

int main(int argc, char **argv)
{
	int num, a, b, c, d, soma;
	printf ("Digite um número de quadro dígitos = ");
	scanf ("%d", &num);
	
	a = num / 1000 ;
	num = num%1000 ;
	
	b = num / 100 ;
	num = num % 100;
	
	c = num / 10 ;
	num = num % 10; 
	
	d = num / 1 ;
	
	soma = a + b + c + d;
	
	printf ("a = %d b = %d c = %d d = %d \ne a soma deles é igual a = %d", a, b, c, d, soma);
	return 0;
}

