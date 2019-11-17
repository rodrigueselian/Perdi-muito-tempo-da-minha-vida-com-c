#include <stdio.h>

main()
{
	int q, r, a[10], b[10], u[20], i, j, f=0, q2;
	scanf("%d %d",&q,&r);
	for (i = 0; i < q; i++)
		scanf("%d",&a[i]);
	for (i = 0; i < r; i++)
		scanf("%d",&b[i]);

	q2 = 0;
	for (i = 0; i < q; i++)
	{
		f = 0;
		for (j = 0; j < r; j++)
		{
			if (a[i] == b[j])
			f = 1;
		}
		if (f == 0)
		{
			u[q2] = a[i];
			q2++;
		}
	}
	for (i = 0; i < q2; i++)
	printf("%d ",u[i]);
}
