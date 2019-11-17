#include <stdio.h>

void exibeTabuada (int n);

int main()
{
	int i;
	for (i = 1; i < 6; i++)
	exibeTabuada(i);
}

void exibeTabuada (int n)
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		printf("%dx%d=%d\n",i,n,n*i);
	}
}
