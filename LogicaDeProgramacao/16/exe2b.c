#include <stdio.h>

void exibeDivisores (int n);

int main()
{
	int i;
	for (i = 1; i <= 20; i++)
	{
		printf("%d: ",i);
		exibeDivisores(i);
		printf("\n");
	}
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
