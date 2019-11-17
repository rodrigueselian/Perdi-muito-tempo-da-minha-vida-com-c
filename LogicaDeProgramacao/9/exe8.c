#include <stdio.h>

main()
{
	int a, i, v;
	v = 0;
	
	for (i = 1; v <= 100; i++)
	{
		v = v + i;
		a = i;
	}
	printf("%d",a);
}

