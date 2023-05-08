/*Escreva uma função que retorne a soma dos n primeiros números naturais 
 (inteiros positivos), dado o valor de n como parâmetro.*/

#include <stdio.h>

int soma(int n){
	int i, som=0; 
	for (i=n; i>0; i--)
	{
	som = som + i;
	printf ("%d ", i);
	}
	printf ("= %d", som);
	return som;
}

int main (){
	int n, som;
	printf("Digite um numero: ");
	scanf("%d", &n);
	som = soma(n);
	printf("\nSoma= %d", som);
return 0;
}

