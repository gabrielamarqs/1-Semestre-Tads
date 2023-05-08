/*Escreva uma função que determine o número de raízes reais de um polinômio de 2° grau, 
ou seja, deve retornar o valor 2 se o polinômio possui duas raízes reais distintas,
1 se o polinômio possui raízes reais iguais e 0 se o polinômio não possui raízes.*/

#include <stdio.h>
#include <math.h>


float polinomio(int a, int b, int c){
	float delta, raiz;
	delta = b * b - (4 * a * c); 
	raiz = sqrt(delta);
	return raiz;
}

int main (){
	int a, b, c;
	float raiz;
	printf ("Polinômio de Segundo Grau\n");
	printf ("ax² + bx + c = 0\n");	
	printf("Digite um numero a: ");
	scanf("%d", &a);
	printf("Digite um numero b: ");
	scanf("%d", &b);
	printf("Digite um numero c: ");
	scanf("%d", &c);
	raiz = polinomio(a, b, c);
	if (raiz > 0) {
		printf ("O polinômio possui duas raízes.");}
	else if (raiz == 0) {
		printf ("O polinômio possui somente uma raíz.");}
	else {
		printf ("O polinômio não possui raízes.");}

return 0;
}



