#include <stdio.h>

main()
{
	int q, r, a[9], b[9], s[19], cod, i;
	
	scanf("%d%d",&q,&r);
	for (i = 0; i < q; i++)
	scanf("%d",&a[i]);
	for (i = 0; i < r; i++)
	scanf("%d",&b[i]);
	
	scanf("%d",&cod);
	while (cod != 3)
	{
		if (cod == 1)
		{
			for (i = 0; i < q; i++)
			s[i] = a[i];
			for (i = 0; i < q+r; i++)
			s[i+q] = b[i];
		}
		else
		{
			for (i = 0; i < r; i++)
			s[i] = b[i];
			for (i = 0; i < r+q; i++)
			s[i+r] = a[i];
		}
		for (i = 0; i < q+r; i++)
		printf("%d ",s[i]);
		scanf("%d",&cod);
	}
}
