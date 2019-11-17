#include <stdio.h>

main()
{
	int i, a, b;
	scanf("%d",&a);
	do
	{
		scanf("%d",&b);
		for (i = 1; i <= a; i++)
	{
		printf("%d ",b);
	}
	printf("\n");
	scanf("%d",&a);
	i = 1;
	} while (a > 0);
}
