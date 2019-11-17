#include <stdio.h>

void exibePrimos (int n1, int n2);

main()
{
	int men, mai, aux;
	
	scanf("%d",&men);
	if (scanf("%d",&mai) < men)
	{
		aux = men;
		men = mai;
		mai = aux;
	}
	exibePrimos(men,mai);
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
