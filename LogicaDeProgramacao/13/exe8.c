#include <stdio.h>

main()
{
	int ql, qc, i, j, x, maior;
	
	scanf("%d%d",&ql,&qc);
	
	int m[ql][qc], v[ql];
	
	for(i = 0; i < ql; i++)
	{
		for(j = 0; j < qc; j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i = 0; i < ql; i++)
	{
		maior = m[i][0];
		for(x = 0; x < qc; x++)
		{
			if (maior < m[i][x])
			maior = m[i][x];
		}
		v[i] = maior;
		printf("%d ",v[i]);
	}
}
