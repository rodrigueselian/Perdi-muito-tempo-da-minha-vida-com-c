#include <stdio.h>

main()
{
	int ql, qc, i, j, x, menor;
	
	scanf("%d%d",&ql,&qc);
	
	int m[ql][qc];
	
	for(i = 0; i < ql; i++)
	{
		for(j = 0; j < qc; j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	
	for(i = 0; i < ql; i++)
	{
		menor = m[i][0];
		for(x = 0; x < qc; x++)
		{
			if (menor > m[i][x])
			menor = m[i][x];
		}
		for (j=0; j<qc; j++)
		{
			m[i][j] /= menor;
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
}
