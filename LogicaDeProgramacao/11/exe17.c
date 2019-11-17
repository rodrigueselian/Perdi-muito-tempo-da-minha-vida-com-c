#include <stdio.h>

main()
{
	int f1, i, i2, etapa, trecho, dist, t, soma, tt, c, mdist;
	c = 0; f1 = 1; 
	
	printf("insira o n de etapas:\n");
	scanf("%d",&etapa);
	
	for (i = 1; i <= etapa; i++)
	{
		soma = 0;
		tt = 0;
		printf("insira a quantidade de trechos:\n");
		scanf("%d",&trecho);
		for (i2 = 0; i2 < trecho; i2++)
		{
			printf("insira a distancia e o tempo:\n");
			scanf("%d",&dist);
			scanf("%d",&t);
			tt = tt + t;
			soma = soma + dist;
			if (dist < 50)
			c++;
		}
		printf("Etapa %d: %d\n",i,tt);
		if (f1 == 1)
		{
			mdist = soma;
			f1 = 0;
		}
		if (mdist > soma)
		{
			mdist = soma;
		}
	}
	printf("%d trechos com menos de 50km\n",c);
	printf("menor distancia foi: %dKm\n",mdist);
}
