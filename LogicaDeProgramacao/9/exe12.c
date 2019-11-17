#include <stdio.h>

main()
{
	int x, x2, xr, z, c, i;
	c = 0;
	
	scanf("%d",&x);
	do
	{
		scanf("%d",&z);
	} while (x > z);
	xr = x+1;
	for (i = 1; x <= z; i++)
	{
		x = x+xr;
		xr++;
	}
	
	printf("%d\n",i);
}

