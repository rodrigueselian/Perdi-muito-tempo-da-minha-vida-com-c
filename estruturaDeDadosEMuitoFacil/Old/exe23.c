#include <stdio.h>

void duplaClassificada(int a, int b, int *x, int *y, int ord);

main()
{
	int a, b, x, y, ord;
	
	scanf("%d%d",&a,&b);
	while (a != b)
	{
		ord = (a+b)%2;
		duplaClassificada(a,b,&x,&y,ord);
		printf("%d %d\n",x,y);
		scanf("%d%d",&a,&b);
	}
}

void duplaClassificada(int a, int b, int *x, int *y, int ord)
{
	if (ord == 0)
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
	else
	{
		if (a < b)
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
}
