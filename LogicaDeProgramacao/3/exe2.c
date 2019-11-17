#include <stdio.h>

main()
{
	int gi, gm;
	
	printf("insira os gols do inter:");
	scanf("%i",&gi);
	printf("insira os gols do gremio");
	scanf("%i",&gm);
	
	if (gi > gm)
	printf("inter");
	if (gm > gi)
	printf("gremio");
	if (gm == gi)
	printf("empate");
}
