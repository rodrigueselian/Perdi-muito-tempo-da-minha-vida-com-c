#include <stdio.h>

main()
{
	int q, i, j, r=0;
	
	scanf("%d",&q);
	
	int m[q][q];
	
	for (i = 0; i < q; i++)
	{
		for (j = 0; j < q; j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	
	for (i = 0; i < q/2; i++)
	{
		for (j = 0; j < q/2; j++)
		{
			r += m[i][j];
		}
	}
	printf("%d\n",r);
	r = 0;
	for (i = q-1; i > q/2-1; i--)
	{
		for (j = q-1; j > q/2-1; j--)
		{
			r += m[i][j];
		}
	}
	printf("%d\n",r);
	r = 0;
	for (i = 0; i < q; i++)
	{
		for (j = 0; j < i+1; j++)
		{
			r += m[i][j];
		}
	}
	printf("%d\n",r);
	r = 0;
	for (i = 0; i < q-1; i++)
	{
		for (j = q-1; j > i; j--)
		{
			r += m[i][j];
		}
	}
	printf("%d\n",r);
}
