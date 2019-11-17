#include <stdio.h>

main()
{
	int prev,next,cont;
	cont = 0; prev = 0; next = 0;
	
	do
	{
		if(prev > next)
		{
		cont++;
		}
		prev = next;
		printf("insira um numero:");
		scanf("%i",&next);
	}
	while (next > 0);
	printf("%i",cont);
}
