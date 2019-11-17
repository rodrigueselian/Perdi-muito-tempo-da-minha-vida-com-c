#include <stdio.h>

main()
{
	int n1, soma, i;
	
	scanf("%d",&n1);
	while (n1 > 0)
	{
		soma = 0;
		for (i = 1; i < n1; i++)
		{
			if (n1%i == 0)
			{
				soma = soma + i; 
			}
		}
		if (soma == n1)
		{
			printf("e perfeito\n");
		}
		else
		{
			printf("nao e perfeito\n");
		}
		scanf("%d",&n1);
	}
}
