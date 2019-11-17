#include <stdio.h>

main()
{
	float n1, n2, r;
	
	printf("insira sua primeira nota:");
	scanf("%f",&n1);
	printf("insira sua segunda nota:");
	scanf("%f",&n2);
	
	r = (n1+n2)/2;
	
	if (r > 6)
	{
		printf("media %f\naprovado",r);
	}
	else
	{
		if (r < 3)
		{
		
		printf("media %f\nreprovado",r);
	}
		else
		{
			printf("media %f\nexame",r);
		}
		
	}
}

