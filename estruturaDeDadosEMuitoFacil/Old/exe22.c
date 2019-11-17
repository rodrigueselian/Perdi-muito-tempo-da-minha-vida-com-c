#include <stdio.h>

void classificaCrescente(int *x, int *y);

main()
{
	int x, y;
	
	scanf("%d%d",&x,&y);
	while (x != y)
	{
		classificaCrescente(&x,&y);
		printf("%d %d\n",x,y);
		scanf("%d%d",&x,&y);
	}
}

void classificaCrescente(int *x, int *y)
{
	int aux;
	if (*x > *y)
	{
		aux = *x;
		*x = *y;
		*y = aux;
	}
}
