#include <stdio.h>

main()
{
	int i, b, a, d, m;
	float r;
	m = 0;
	do
	{
		scanf("%i%i",&a,&b);
	} while (a == b);
	if (a < b)
	{
		for (i = a; i <= b; i++)
		if (i%2 == 1)
		r = r + i;		
	} 
	else {
		d = a-b;
		for (i = 1; i <= d+1; i++)
		{
			if (b%3 == 0)
			{
				r = r+b;
				m++;
			}
			b++;
		}
		r = r/m;
	}
	printf("%.0f",r);
}
