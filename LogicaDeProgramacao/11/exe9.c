#include <stdio.h>

main()
{
	int n1, i, m;
	
	do
	{
		scanf("%d",&n1);
	} while (n1 < 0);
	
	for (i = 1; i <= n1; i++)
	{
		if (n1%i == 0)
		printf("%d ",i);
	}
}
