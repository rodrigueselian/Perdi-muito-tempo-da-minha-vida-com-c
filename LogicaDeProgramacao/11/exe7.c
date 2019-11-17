#include <stdio.h>

main()
{
	int a, r, i, f;
	r = 5;
	scanf("%d",&a);
	
	if (a != 1)
	{
		f = 1;
		for (i = 1; i < a; i++)
		{
			if (f == 1)
			{
				r++;
				f = 0;
			} else {
				r+=5;
				f = 1;
			}
		}
	} 	
	printf("%d",r);
}
