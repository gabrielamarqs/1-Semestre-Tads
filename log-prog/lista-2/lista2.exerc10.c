#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	float varA, varB, varC, varD, mh, mq; 
	printf ("Informe o valor de a=");
	scanf ("%f",&varA);
	printf ("Informe o valor de b=");
	scanf ("%f",&varB);
	printf ("Informe o valor de c=");
	scanf ("%f",&varC);
	printf ("Informe o valor de d=");
	scanf ("%f",&varD);
	mh=4/((1/varA)+(1/varB)+(1/varC)+(1/varD));
	mq=sqrt ((varA * varB + varB * varB + varC * varC + varD * varD)/4);
	printf ("A média harmônica é = %f e a média quadrática é = %f", mh, mq);
	return 0;
}

