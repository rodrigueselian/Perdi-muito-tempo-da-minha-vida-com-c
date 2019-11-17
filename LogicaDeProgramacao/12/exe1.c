#include <stdio.h>

main()
{
	int i, x[9];
	scanf("%d",&x[0]);
	for (i = 1; i <= 10; i++)
	{
		x[i] = x[0];
		printf("%d ",x[i]);
	}
}
