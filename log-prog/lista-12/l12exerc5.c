/*Escreva uma função que calcule a área de triângulos*/

#include <stdio.h>

float areaT(float h, float b){
	float area;
	area = (h * b)/2;
	return area;
}

int main (){
	float h, b, area;
	printf ("Área do triângulo.\n");
	printf ("At = (h(altura) * b(base))/2 \n");	
	printf("Digite o valor da altura em metros: ");
	scanf("%f", &h);
	printf("Digite o valor da base em metros: ");
	scanf("%f", &b);
	area = areaT(h, b);
	printf ("A área do triângulo é: %.2f m²", area);
return 0;
}



