#include <stdio.h>

main()
{
	float m, final;
	
	printf("insira a quantidade de macas:");
	scanf("%f",&m);
	
	if(m <= 11)
	{
		final = m*0.30;
		printf("o total deu:%f",final);
	}
	else
	{
		final = m*0.25;
		printf("o total deu:%f",final);
	}
}
