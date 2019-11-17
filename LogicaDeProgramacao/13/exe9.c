#include <stdio.h>

main()
{
	int ql, qc, i, j, c1, c2, c=0;
	
	scanf("%d%d",&ql,&qc);
	
	int m[ql][qc], v[ql*qc];
	
	for(i = 0; i < ql; i++)
	{
		for(j = 0; j < qc; j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	scanf("%d%d",&c1,&c2);
	
	for(i = 0; i < ql; i++)
	{
		for(j = c1; j <= c2; j++)
		{
			if (m[i][j]%2 == 0)
			{
				v[c] = m[i][j];
				c++;	
			}
		}
	}
	for (i = 0; i < c; i++)
	printf("%d ",v[i]);
}
