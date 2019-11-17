#include <stdio.h>

main()
{
	int l, c, i, j, aux;
	scanf("%d%d",&l,&c);
	int m[l][c], t[c][l];
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < c; j++)
		{
			t[j][i] = m[i][j];
		}
	}
	for (i = 0; i < c; i++)
	{
		for (j = 0; j < l; j++)
		{
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}
}
