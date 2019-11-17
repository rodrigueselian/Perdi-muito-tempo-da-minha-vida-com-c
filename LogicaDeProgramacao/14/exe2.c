#include <stdio.h>

main()
{
	int i, n;
	char x;
	
	scanf("%d",&n);
	for (i = 0; i < n; i++)
	{
		scanf("\n%c",&x);
		printf("%d\n",x);
	}
}
