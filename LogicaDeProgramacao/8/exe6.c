#include <stdio.h>

main()
{
	int i, a;
	scanf("%d",&a);
	for (i = 1; i <= 20; i+=a)
	{
		printf("%d\n",i);
	}
}
