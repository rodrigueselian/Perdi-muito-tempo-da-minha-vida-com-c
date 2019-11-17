#include <stdio.h>

main()
{
	float mor, ma, mord, mad, total, total2;
	
	printf("insira a quantidade de morangos em kg:");
	scanf("%f",&mor);
	printf("insira a quantidade de macas em kg:");
	scanf("%f",&ma);
	
	if (mor <= 5){
		mord = mor*5;
	} else {
		mord = mor*4;
	}
	if (ma <= 5){
		mad = ma*3;
	} else {
		mad = ma*2;
	}	
	total = mord+mad;
	if (mor+ma > 8 || total > 35){
		total2 = (total-(total*20/100));
		printf("Valor a ser pago:%.2f",total2);
	} else {
	printf("Valor a ser pago:%.2f",total);
	}
}
