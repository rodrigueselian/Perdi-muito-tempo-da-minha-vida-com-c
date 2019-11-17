#include <stdio.h>

main()
{
	int i, a, b;
	scanf("%d",&a);
	while(a > -1)
	{
		scanf("%d",&b);
		for (i = 1; i <= a-1; i++)
	{
		printf("%d,",b);
	}
	printf("%d\n",b);
	scanf("%d",&a);
	i = 1;
	}
}
