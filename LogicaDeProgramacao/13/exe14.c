#include <stdio.h>

main()
{
	int m[4][4], n, c1, c2, s=0, i, j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	scanf("%d",&n);
	scanf("%d",&c1);
	for (i = 0; i < n-1; i++)
	{
		c2 = c1;
		scanf("%d",&c1);
		s = s + m[c2][c1];
	}
	printf("%d",s);
}
