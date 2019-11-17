#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{
	float cel,fah,ext,final;
	
	printf("insira a temperatura em graus fahrenheit:");
	scanf("%f",&fah);
	
	cel = (((fah-32)/9)*5);
	printf("a temperatura em graus celsius e:%f\n",cel);
	system("pause");
}
