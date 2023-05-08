#include <stdio.h>

int main(int argc, char **argv)
{
	float sal;
	printf ("Informe seu salário para saber o valor reajustado: ");
	scanf ("%f", &sal);
	if (sal <= 900)
		printf ("O salário fica R$ %.2f.", sal*.2 + sal);
	else
		if ((sal > 900)&&(sal <= 1300))
			printf ("O salário fica R$ %.2f.", sal*.1 + sal);
		else
			if ((sal > 1300)&&(sal <= 1800))
				printf ("O salário fica R$ %.2f.", sal*.05 + sal);
			else
				printf ("O salário fica R$ %.2f.", sal);
	return 0;
}

