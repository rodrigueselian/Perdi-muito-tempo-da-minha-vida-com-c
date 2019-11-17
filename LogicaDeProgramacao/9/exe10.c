#include <stdio.h>

main()
{
	int n, i, e;
	
	scanf("%d",&n);
	do
	{
		printf("%d ",n);
		for (i = 1; n > 1; i++)
		{
			e = n%2;
			if (e == 0)
			{
				n = n/2;
			} else {
				n = 3*n+1;
			}
			printf("%d ",n);
		}
		printf("\n");
		scanf("%d",&n);
	} while (n >= 1);
}

