#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	int resp, chute, dnv, tent;
	tent = 0;
	srand(time(NULL));

	
	do
	{
		tent = 0;
		resp = rand() % 1000;
		printf("Adivinhe o Numero de 1 a 1000!\n");
		scanf("%d",&chute);
		tent++;
		while (chute != resp)
		{
			if (chute < resp)
			{
				printf("Baixo\n");
			}
			else
			{
				printf("Alto\n");
			}
			scanf("%d",&chute);
			tent++;
		}
		printf("*** Parabens! voce acertou! ***\n");
		printf("Voce acertou com %d tentativas!\n",tent);
		printf("jogar de novo? (1.sim 2.nao)\n");
		scanf("%d",&dnv);
	} while (dnv == 1);
	printf("OBRIGADO POR JOGAR!");
}
