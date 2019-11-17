#include <stdio.h>

main()
{
	int q, c, i, z[9], w[9];
	
	scanf("%d",&q);
	c = q-1;
	for (i = 0; i < q; i++)
	{
		scanf("%d",&z[i]);
	}
	for (i = 0; i < q; i++)
	{
		w[i] = z[c];
		printf("%d ",w[i]);
		c--;
	}
}
