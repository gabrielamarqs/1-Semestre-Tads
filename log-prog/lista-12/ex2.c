
#include <stdio.h>

int a, b, resSoma; //variaveis GLOBAIS

void soma(){
	printf ("Digite dois numeros: ");
	scanf("%d %d", &a, &b);
	resSoma = a + b;
	printf("%d", resSoma);
}
int main (){
soma(); //chamada da funcao
return 0;
}
