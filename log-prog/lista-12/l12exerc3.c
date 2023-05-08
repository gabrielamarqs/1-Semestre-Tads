/*Escreva uma função que calcule a área de uma circunferência.*/

#include <stdio.h>
#include <math.h>
#define PI 3.1416

float areaC(float r){
	float area;
	area = PI * r * r;
	return area;
}

int main (){
	float r, area;
	printf ("Área do círculo.\n");
	printf ("Ac = π * R²\n");	
	printf("Digite o valor do raio da circunferência em metros: ");
	scanf("%f", &r);
	area = areaC(r);
	printf ("A área da circunferência é: %.2f m²", area);
return 0;
}



