#include <stdio.h>

main()
{
	int q, x[9], y[9], r[19], i, c = 0;
	
	scanf("%d",&q);
	for (i = 0; i < q; i++)
	scanf("%d",&x[i]);
	for (i = 0; i < q; i++)
	scanf("%d",&y[i]);
	
	for (i = 0; i < q*2; i+=2)	
	{
		r[i] = x[c];
		c++;
	}
	c = 0;
	for (i = 1; i < q*2; i+=2)
	{
		r[i] = y[c];
		c++;
	}
	for (i = 0; i < q*2; i++)
	printf("%d ",r[i]);
}
