#include <stdio.h>

main()
{
	int b[9], x, i;
	
	for(i = 0; i < 9; i++)
	{
		scanf("%d",&b[i]);
	}
	scanf("%d",&x);
	for (i = 9; i > 0; i--)
	{
		b[i] = b[i-1];
	}
	b[0] = x;
	for (i = 0; i < 10; i++)
	printf("%d ",b[i]);
} //dps faz um programa, que vai adicionando vetores e empurrando o resto
