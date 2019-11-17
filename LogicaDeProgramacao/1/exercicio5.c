#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{
	float cel,fah,ext,final;
	
	printf("insira a temperatura em graus celsius:");
	scanf("%f",&cel);
	
	fah = (((cel/5)*9)+32);
	printf("a temperatura em graus fahrenheit e:%f\n",fah);
	system("pause");
}
