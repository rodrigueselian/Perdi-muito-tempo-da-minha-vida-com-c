#include <stdio.h>

main()
{
	float a, b, final;
	
	printf("insira sua altura:");
	scanf("%f",&a);
	printf("insira 1 se voce e mulher ou 2 se voce for homem:");
	scanf("%f",&b);
	
	if(b > 1)
	{
		final = (72.7*a)-58;
		printf("seu peso ideal e:%f",final);
	}
	else
	{
		final = (62.1*a)-44.7;
		printf("seu peso ideal e:%f",final);
	}
}
