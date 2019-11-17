#include <stdio.h>

main()
{
	int l, c, i, j, aux;
	scanf("%d%d",&l,&c);
	int m[l][c];
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < c; j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < c; j+=2)
		{
			aux = m[i][j];
			m[i][j] = m[i][j+1];
			m[i][j+1] = aux;
		}
	}
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d",m[i][j]);
		}
	}
}
