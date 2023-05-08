/*Escreva uma função que calcule a área de uma figura retangular.*/

#include <stdio.h>


float areaR(float h, float b){
	float area;
	area = h * b;
	return area;
}

int main (){
	float h, b, area;
	printf ("Área do retângulo.\n");
	printf ("Ar = h(altura) * b(base) \n");	
	printf("Digite o valor da altura em metros: ");
	scanf("%f", &h);
	printf("Digite o valor da base em metros: ");
	scanf("%f", &b);
	area = areaR(h, b);
	printf ("A área do retângulo é: %.2f m²", area);

return 0;
}



