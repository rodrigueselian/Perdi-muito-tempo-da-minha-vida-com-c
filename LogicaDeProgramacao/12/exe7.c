#include <stdio.h>

main()
{
	int q, v[9], i, pick;
	scanf("%d",&q);
	for (i = 0; i < q; i++)
	{
		scanf("%d",&v[i]);
	}
	scanf("%d",&pick);
	while (pick >= 0 && pick < q)
	{
		printf("%d\n",v[pick]);
		scanf("%d",&pick);		
	}
}
