#include <stdio.h>

main()
{
	float n1, n2, r, sel;
	
	printf("insira o primeiro numero:");
	scanf("%f",&n1);
	printf("insira o segundo numero:");
	scanf("%f",&n2);
	printf("selecione a operacao:\n1.adicao\n2.subtracao\n3.divisao\n4.multiplicacao\n");
	scanf("%f",&sel);
	
	if (sel == 1){
		r = n1+n2;
		printf("%f",r);
	}
	if (sel == 2){
		r = n1-n2;
		printf("%f",r);
	}
	if (sel == 3){
		r = n1/n2;
		printf("%f",r);
	}
	if (sel == 4){
		r = n1*n2;
		printf("%f",r);
	}
}
