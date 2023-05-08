#include <stdio.h>

int main()
{
	float salFix, vendas, comis;
	printf ("Informe o salário fixo do vendedor=");
	scanf ("%f",&salFix);
	printf ("Informe o total de vendas efetuadas pelo mesmo=");
	scanf ("%f",&vendas);
	comis=salFix+(vendas*.15);
	printf ("A comissão do vendedor no final do mês será de= %.2f", comis);	
	return 0;
}

