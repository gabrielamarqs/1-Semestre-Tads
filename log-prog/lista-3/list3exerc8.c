
#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	char sexo;
	float w, h, imc;
	printf ("Informe o sexo da pessoa (m ou f): ");
	scanf ("%c", &sexo);
	printf ("Informe a altura e o peso: ");
	scanf ("%f %f", &w, &h);
	imc = w / h * h;
	sexo = (char) tolower (sexo);
	
	if (sexo == 'f') {
		if (imc < 19)
			printf ("Abaixo do peso.");
		else if ((imc >= 19)&&(imc < 24))
			printf ("Normal.");
		else if ((imc >= 24)&&(imc < 29))
			printf ("Obesidade leve.");
		else if ((imc >= 29)&&(imc < 39))
			printf ("Obesidade moderada.");
		else 
			printf ("Obesidade mórbida.");
	} else 
		if (sexo == 'm') {
		if (imc < 20)
			printf ("Abaixo do peso.");
		else if ((imc >= 20)&&(imc < 25))
			printf ("Normal.");
		else if ((imc >= 25)&&(imc < 30))
			printf ("Obesidade leve.");
		else if ((imc >= 30)&&(imc < 40))
			printf ("Obesidade moderada.");
		else 
			printf ("Obesidade mórbida.");
	} else
				
	return 0;
}

