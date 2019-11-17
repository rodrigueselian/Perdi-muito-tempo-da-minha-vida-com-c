#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{
	float ini,fim,gas,gasp,din,media,luc ;
	
	gasp = 2.50;
	
	printf("insira a marcacao do odometro no inicio do dia:");
	scanf("%f",&ini);
	printf("insira a marcacao do odometro no final do dia:");
	scanf("%f",&fim);
	printf("insira o gasto de combustivel em litros:");
	scanf("%f",&gas);
	printf("insira a quantia adquirida no dia:");
	scanf("%f",&din);
	
	media = (((fim-ini)/gas));
	luc = (din-(gas*gasp));
	
	printf("a media de consumo e de :%f km/l\n",media);
	printf("o lucro obtido e de:%f reais\n",luc);
	system("pause");
}
