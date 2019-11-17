#include <stdio.h>

main()
{
	int m[4][4], n[4][4], i, j, r=0;
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			r += m[i][j];
		}
	}
	printf("%d\n",r);
	r = 0;
	for (i = 3; i > 1; i--)
	{
		for (j = 3; j > 1; j--)
		{
			r += m[i][j];
		}
	}
	printf("%d\n",r);
	r = 0;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < i+1; j++)
		{
			r += m[i][j];
		}
	}
	printf("%d\n",r);
	r = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 3; j > i; j--)
		{
			r += m[i][j];
		}
	}
	printf("%d\n",r);
}
