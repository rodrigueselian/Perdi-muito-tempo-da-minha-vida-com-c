#include <stdio.h>

void duplaCrescente(int a, int b, int *x, int *y);

main()
{
	int a, b, x, y;
	
	scanf("%d%d",&a,&b);
	while (a != b)
	{
		duplaCrescente(a,b,&x,&y);
		printf("%d %d\n",x,y);
		scanf("%d%d",&a,&b);
	}
}

void duplaCrescente(int a, int b, int *x, int *y)
{
	if (a > b)
	{
		*x = b;
		*y = a;
	}
	else
	{
		*x = a;
		*y = b;
	}
}
