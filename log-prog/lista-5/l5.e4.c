// Lista 5 - Exercício 4
/*Dado uma sequência de n números inteiros, onde n é informado pelo usuário, fazer
separadamente a soma dos números pares e dos números ímpares dessa sequência.*/


#include <stdio.h>

int main(int argc, char **argv)
{
	int n, i = 1, soma1 = 0, soma2 = 0;
	printf("Digite N: ");
	scanf("%d", &n);
	while(i <= n)
	{
	if (i % 2 == 0) {
	soma1 = soma1 + i;
	i = i + 1;
	} else {
	soma2 = soma2 + i;
	i = i + 1;
	}
	}
	printf("Soma dos pares = %d, e soma dos ímpares = %d", soma1, soma2);
	
	return 0;
}

