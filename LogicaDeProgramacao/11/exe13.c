#include <stdio.h>

main()
{
	int n1, n2, i, i2, f;
	
	do
	{
		scanf("%d",&n1);
		scanf("%d",&n2);
	} while (n2 < n1);
	
	for(i2 = n1; i2 <= n2; i2++)
	{
		f = -1;
		for (i = 1; i <= i2; i++)
		{
			if (i2%i == 0)
			f++;
		}
		if (f == 1)
			printf("%d ",i-1);
	}
}
