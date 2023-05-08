#include <stdio.h>

int a, b; //variaveis globais

void soma(){
	int res_soma; //variaveis locais
	res_soma = a + b;
	printf("%d", res_soma);
}

int main (){
	printf("Digite dois numeros: ");
	scanf("%d %d", &a, &b);
	soma();
return 0;
}

