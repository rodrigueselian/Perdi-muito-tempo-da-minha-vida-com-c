#include <stdio.h>

void exibePrimos (int n1, int n2);

main()
{
	int men, mai, aux;
	
	scanf("%d",&men);
	scanf("%d",&mai);
	while (men > 0 && mai > 0)
	{
		if (mai < men)
		{
			aux = men;
			men = mai;
			mai = aux;
		}
		exibePrimos(men,mai);
		printf("\n");
		scanf("%d",&men);
		scanf("%d",&mai);
	}
	
}

void exibePrimos (int n1, int n2)
{
	int i, j, c;
	for (i = n1; i <= n2; i++)
	{
		c = 0;
		for (j = 1; j <= i; j++)
		{
			if(i%j == 0)
			c++;
		}
		if (c < 3)
		printf("%d ",i);
	}
}
