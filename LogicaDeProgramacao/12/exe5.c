#include <stdio.h>

main()
{
	int q, i, z[9], w[9];
	
	scanf("%d",&q);
	for (i = 0; i < q; i++)
	{
		scanf("%d",&z[i]);
	}
	for (i = 0; i < q; i++)
	{
		w[i] = z[i];
		printf("%d ",w[i]);
	}
}
