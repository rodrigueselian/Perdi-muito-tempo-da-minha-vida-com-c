#include <stdio.h>

main()
{
	int q, r, a[10], b[10], u[20], i, j, f=0, q2;
	scanf("%d %d",&q,&r);
	for (i = 0; i < q; i++)
		scanf("%d",&a[i]);
	for (i = 0; i < r; i++)
		scanf("%d",&b[i]);
	for (i = 0; i < q; i++)
		u[i] = a[i];
	
	q2 = q;
	for (i = 0; i < r; i++)
	{
		f = 0;
		for (j = 0; j < q; j++)
		{
			if (b[i] == u[j])
			f = 1;
		}
		if (f == 0)
		{
			u[q] = b[i];
			q++;
		}
	}
	for (i = 0; i < q; i++)
	printf("%d ",u[i]);
}
