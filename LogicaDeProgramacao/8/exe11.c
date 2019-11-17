#include <stdio.h>

main()
{
	int i, a, b;

	scanf("%d",&a);
	scanf("%d",&b);
	while(a >= b)
	{
		printf("Valores Invalidos");
		scanf("%d",&a);
		scanf("%d",&b);
	}
	for (i = a; i <= b-1; i++)
	{
		printf("%d ",i);
	}
	printf("%d\n",i);
}
