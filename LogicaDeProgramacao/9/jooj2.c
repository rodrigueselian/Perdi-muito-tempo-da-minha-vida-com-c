#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	char dnv, ba, c;
	int resp, chute, max, min, tent;
	tent = 0;
	srand(time(NULL));
	printf("Vamos jogar! voce pensa em um numero de 1 a 1000 e eu tento adivinhar!\n");
	
	do
	{
		max = 1000;
		min = 0
		chute = rand() % max;
		printf("Meu primeiro palpite é %d!\n",chute);
		printf("digite B se for baixo ou A se for alto\n");
		scanf("%c",&ba);
		if (ba = 'a')
		{
			rang = chute;
		}
		else
		{
			
		}
		printf("jogar de novo? (S. ou N.?)\n");
		scanf("%c",&dnv);
	} while (dnv == 's');
	printf("OBRIGADO POR JOGAR!");
}
