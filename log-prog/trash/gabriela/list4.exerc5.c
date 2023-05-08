#include <stdio.h>

	int main( ) {
		
	int op;
	float valor, vt;
	printf("Informe o valor da compra:\n");
	scanf("%f", &valor);

	 printf("\nEscolha as opções a seguir:\n");
	 printf("1. Á vista com 15 porcento de desconto.\n");
	 printf("2. Pagamento com cheque pré-datado p/ 30 dias com 10 porcento de desconto.\n");
	 printf("3. Pagamento parcelado em 3 vezes e com 5 porcento de desconto.\n");
	 printf("4. Pagamento parcelado em 6 vezes.\n");
	 printf("5. Pagamento parcelado em 12 vezes e com 8 porcento de acréscimo ao valor total.\n");
	 scanf ("%d",&op);
	 
	switch (op)
	 {
	 case 1:
	 vt = valor * .85;
	 printf("\nValor da compra = %.2f reais.\nValor final da compra = %.2f reais.\nO desconto será de = %.2f reais.\n\n", valor, vt, (valor - vt));
	 break;
	 case 2:
	 vt = valor * .9;
	 printf("\nValor da compra = %.2f reais.\nValor final da compra = %.2f reais.\nO desconto será de = %.2f reais.\n\n", valor, vt, (valor - vt));
	 break;
	 case 3:
	 vt = valor * .95;
	 printf("\nValor da compra = %.2f reais.\nValor final da compra = %.2f reais.\nO desconto será de = %.2f reais.\nSerão três parcelas de = %.2f reais.\n\n", valor, vt, (valor - vt), (vt / 3));
	 break;
	case 4:
	 vt = valor;
	 printf("\nValor da compra = %.2f reais.\nValor final da compra = %.2f reais.\nO desconto será de = %.2f reais.\nSerão seis parcelas de = %.2f reais.\n\n", valor, vt, (valor - vt), (vt / 6));
	 break;
	case 5:
	 vt = valor * 1.08;
	 printf("\nValor da compra = %.2f reais.\nValor final da compra = %.2f reais.\nO acréscimo será de = %.2f reais.\nSerão doze parcelas de = %.2f reais.\n\n", valor, vt, (vt - valor), (vt / 12));
	 break;
	 default:
	 printf ("Opcao inexistente!\n");
	 }
 return 0;
}
