#include <stdio.h>

void exibeTabuada (int n);

int main()
{
	int a;
	scanf("%d",&a);
	while (a < 1 || a > 10)
	{
		scanf("%d",&a);
	}
	exibeTabuada(a);
}

void exibeTabuada (int n)
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		printf("%dx%d=%d\n",i,n,n*i);
	}
}
