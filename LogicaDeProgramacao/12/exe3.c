#include <stdio.h>

main()
{
	int i, f = 1, a, b, q, v[9];
	
	scanf("%d%d%d",&a,&b,&q);
	for (i = 0; i < q; i++)
	{
		if (f == 1)
		{
			v[i] = a;
			f = 0;
		}
		else
		{
			v[i] = b;
			f = 1;
		}
		printf("%d ",v[i]);
	}
}
