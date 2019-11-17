#include <stdio.h>

main()
{
	int i, x, v[9];
	x = 101;
	for (i = 0; i < 10; i++)
	{
		v[i] = x+i;
		printf("%d ",v[i]);
	}
}
