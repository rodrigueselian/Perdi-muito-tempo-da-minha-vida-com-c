#include <stdio.h>

main()
{
	int ql, qc, i, j, r=0;
	
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
		r = 0;
		for(j = 0; j < qc; j++)
		{
			r += m[i][j];
		}
		printf("%d ",r);
	}
	printf("\n");
	for(i = 0; i < qc; i++)
	{
		r = 0;
		for(j = 0; j < ql; j++)
		{
			r += m[j][i];
		}
		printf("%d ",r);
	}
	printf("\n");
}
