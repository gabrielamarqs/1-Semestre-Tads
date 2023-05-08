/*Escreva um programa que oferece ao usuário a possibilidade de calcular as áreas de
circunferências, retângulos e triângulos. Conforme a opção selecionada, solicite os
parâmetros necessários, acione uma das funções criadas nos exercícios anteriores,
exibindo o resultado.*/

#include <stdio.h>
#include <math.h>
#define PI 3.1416
#include <ctype.h>



float areaT(float h, float b){
	float area;
	area = (h * b)/2;
	return area;
}

float areaR(float h, float b){
	float area;
	area = h * b;
	return area;
}

float areaC(float r){
	float area;
	area = PI * r * r;
	return area;
}

int main (){
	char resp; 
	float h, b, r, area;
	printf ("Programa para cálculo de áreas de objetos.\n");
	printf ("Opções: \n");
	printf ("a. Área da circunferência: \n");
	printf ("b. Área do retângulo: \n");
	printf ("c. Área do triângulo: \n");
	printf ("\nInforme a opção desejada: ");
	scanf (" %c", &resp);
	resp = tolower (resp);

	switch (resp)
	{
		case 'a':
			printf ("\nÁrea do círculo.\n");
			printf ("Ac = π * R²\n");	
			printf("Digite o valor do raio da circunferência em metros: ");
			scanf("%f", &r);
			area = areaC(r);
			printf ("A área do círculo é: %.2f m²", area);
		break;
		
		case 'b':
			printf ("\nÁrea do retângulo.\n");
			printf ("Ar = h(altura) * b(base) \n");	
			printf("Digite o valor da altura em metros: ");
			scanf("%f", &h);
			printf("Digite o valor da base em metros: ");
			scanf("%f", &b);
			area = areaR(h,b);
			printf ("A área do retângulo é: %.2f m²", area);
		break;
		
		case 'c':
			printf ("\nÁrea do triângulo.\n");
			printf ("At = (h(altura) * b(base))/2 \n");	
			printf("Digite o valor da altura em metros: ");
			scanf("%f", &h);
			printf("Digite o valor da base em metros: ");
			scanf("%f", &b);
			area = areaT(h, b);
			printf ("A área do retângulo é: %.2f m²", area);
		break;
		
		default:
			printf ("\nEntrada inválida.");	
	}

return 0;
}



