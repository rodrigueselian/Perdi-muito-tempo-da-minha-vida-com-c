#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	float comp,volt,reab,cons,min;
	
	printf("insira o comprimento da pista em metros:");
	scanf("%f",&comp);
	printf("insira o numero de voltas:");
	scanf("%f",&volt);
	printf("insira a quantidade de reabastecimentos:");
	scanf("%f",&reab);
	printf("insira o consumo do carro em km/l:");
	scanf("%f",&cons);
	
	min = ((((comp/1000)*volt)/reab)/cons);
	
	printf("a quantidade minima de litros necessario \nate o primeiro reabastecimento e de:%f litros\n",min);
	system("pause");
}
