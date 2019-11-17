#include <stdio.h>

main()
{
	int n1, i, c, f;
	
	for (n1 = 1; n1 <= 20; n1++)
	{
		f = 1;
		for (i = 1; i <= n1; i++)
		{
			if (f == 1)
			printf("%d:",n1);
			if (n1%i == 0)
			printf(" %d",i);
			f = 0;
		}
		printf("\n");
	}
}
