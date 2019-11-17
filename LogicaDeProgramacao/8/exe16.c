#include <stdio.h>

main()
{
	int i, a, c, c2;
	c = 0; c2 = 1;
	
	do
	{
		c2++;
		scanf("%d",&a);
		if (a <= -1)
		c++;
	} while (c2 <= 10);
	printf("%d",c);
}
	
