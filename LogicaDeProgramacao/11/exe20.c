#include <stdio.h>

main()
{
	int qnt, i, c, x, soma;
	c = 0;	x = 1;

	
	scanf ("%d",&qnt);
	while (c < qnt)
	{
		soma = 0;
		for (i = 1; i < x; i++)
		{
			if (x%i == 0)
			{
				soma = soma + i;
			}
		}
		if (soma == x)
		{
			printf("%d ",x);
			c++;
		}
		x++;	
	}
}
