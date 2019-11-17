#include <stdio.h>

main()
{
	int i, a, b;
	
	scanf("%d",&a);
	while (a < 1 || a > 10)
	{
		scanf("%d",&a);
	}
	for (i = 1; i <= 10; i++)
	{
		printf("%dx%d=%d\n",i,a,a*i);
	}
}
