#include <stdio.h>

main()
{
	int m[4][4], l, c, i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	scanf("%d",&l);
	while (l >= 0 && l <= 3)
	{
		scanf("%d",&c);
		printf("%d\n",m[l][c]);
		scanf("%d",&l);
	}
}
