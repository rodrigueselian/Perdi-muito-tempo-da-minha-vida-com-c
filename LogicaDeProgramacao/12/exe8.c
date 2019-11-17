#include <stdio.h>

main()
{
	int i, v[7], pick, f = 1;
	for (i = 0; i < 8; i++)
	{
		scanf("%d",&v[i]);
	}
	
	scanf("%d",&pick);
	while (pick > 0)
	{
		f = 1;
		for (i = 0; i < 8; i++)
		{
			if(pick == v[i])
			{
				printf("%d ",i);
				f = 0;
			}
		}
		if (f == 1)
		printf("O codigo informado nao existe\n");
		scanf("%d",&pick);
	}
}
