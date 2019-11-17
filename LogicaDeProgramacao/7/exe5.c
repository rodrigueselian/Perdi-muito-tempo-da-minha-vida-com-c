#include <stdio.h>

main()
{
	int gi, gg, n, vi, vg, em, x;
	n = 0;	vi = 0;	vg = 0;	em = 0;
	
	do
	{
		printf("insira o numero de gols do inter:");
		scanf("%i",&gi);
		printf("insira o numero de gols do gremio:");
		scanf("%i",&gg);
		if (gi > gg) {
			printf("inter\n");
			vi++;
		} else if (gg > gi) {
			printf("gremio\n");
			vg++;
		} else {
			printf("empate\n");
			em++;
		}
		n++;
		printf("novo grenal? (1.sim 2.nao)");
		scanf("%i",&x);
	}
	while (x == 1);
	
	printf("quantidade de grenais:%i\n",n);
	printf("vitorias do inter:%i\n",vi);
	printf("vitorias do gremio:%i\n",vg);
	printf("quantidade de empates:%i\n",em);
	if (vi > vg)
	printf("inter venceu mais grenais\n");
	else if (vi < vg)
	printf("gremio venceu mais grenais\n");
	else
	printf("nao houve vencedor\n");
}
