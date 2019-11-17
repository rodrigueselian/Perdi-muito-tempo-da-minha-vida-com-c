#include <stdio.h>

void exibeDivisores (int n);

int main()
{
	int a;
	scanf("%d",&a);
	exibeDivisores(a);
}

void exibeDivisores (int n)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		if (n%i == 0)
		printf("%d ",i);
	}
}
