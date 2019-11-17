#include <stdio.h>

main()
{
	int prev, next, r, i;
	
	prev = 0;
	next = 1;
	
	for (i = 1; i <= 20; i++)
	{
		printf("%d ",prev);
		r = prev+next;
		prev = next;
		next = r;
	}
}
