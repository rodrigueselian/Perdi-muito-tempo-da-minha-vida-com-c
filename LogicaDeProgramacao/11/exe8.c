#include <stdio.h>

main()
{
	int a, b, c, r, i;
	a = 1; b = 2; c = 3;
	
	for (i = 1; i < 15-2; i++)
	{
		r = c+2*b-a;
		a = b;
		b = c;
		c = r;		
	}
	printf("%d",r);
}
