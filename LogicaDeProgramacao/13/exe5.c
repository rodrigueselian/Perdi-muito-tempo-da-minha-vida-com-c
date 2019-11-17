#include <stdio.h>

main()
{
	int ql, qc, i, j, tem, t=0;
	
	scanf("%d%d",&ql,&qc);
	
	int m[ql][qc];
	
	for(i = 0; i < ql; i++)
	{
		for(j = 0; j < qc; j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	printf("insira o numero de consulta ");
	scanf("%d",&tem);
	while(tem > 0)
	{
		t=0;
		for(i = 0; i < ql; i++)
		{
			for(j = 0; j < qc; j++)
			{
				if(tem == m[i][j])
				t=1;
			}
		}
		if (t == 1)
		printf("esta na matriz\n");
		else
		printf("nao esta na matriz\n");
		scanf("%d",&tem);
	}
	
}
