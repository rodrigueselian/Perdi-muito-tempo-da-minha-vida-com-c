#include <stdio.h>

main()
{
	int x[13], m[13][3], i, j, c[3] = {0,0,0}, f=0, pts=0, sp=0, dp=0, tp=0;
	
	for (i = 0; i < 13; i++)
	{
		scanf("%d",&x[i]);
	}
	for (i = 0; i < 13; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d",&m[i][j]);			
		}		
	}
	for (i = 0; i < 13; i++)
	{
		f = 0;
		for (j = 0; j < 3; j++)
		{
			f = f + m[i][j];
		}
		if (m[i][x[i]-1] == 1)
		pts++;
		c[f-1]++;	
	}
	printf("\n%d pontos\n",pts);
	printf("%d simples\n",c[0]);
	printf("%d duplas\n",c[1]);
	printf("%d triplas\n",c[2]);	
}
