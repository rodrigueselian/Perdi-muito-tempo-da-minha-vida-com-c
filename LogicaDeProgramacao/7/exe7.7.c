#include <stdio.h>

main()
{
	int dist, con1, con2, con3;
	float ped, max;
	con1 = 0; con2 = 0; con3 = 0;
	
	printf("insira ate quanto voce pode pagar no pedagio:");
	scanf("%f",&max);
	printf("insira o custo do pedagio e a distancia:\n");
	scanf("%f",&ped);
	while (ped > 0)
	{
		scanf("%i",&dist);
		printf("insira o custo do pedagio e a distancia:\n");
		con1++;
		if (ped > max) 
		{
			con2++;
		}
		if (dist > 150 && ped < max)
		{
			con3++;
		}
		scanf("%f",&ped);
	}	
	printf("%i trechos inviaveis\n",con2);
	printf("%i trechos informados\n",con1);
	printf("%i trechos viaveis mais distantes que 150km\n",con3);
}
