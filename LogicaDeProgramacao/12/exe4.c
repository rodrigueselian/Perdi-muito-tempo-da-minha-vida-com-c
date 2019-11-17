#include <stdio.h>

main()
{
	int q, r, i, v[9];
	
	scanf("%d",&q);
	for (i = 0; i < q; i++)
	{
		scanf("%d",&v[i]);
	}
	scanf("%d",&r);
	for (i = 0; i < q; i++)
	{
		v[i] = r - v[i];
		printf("%d ",v[i]);	
	}
}
