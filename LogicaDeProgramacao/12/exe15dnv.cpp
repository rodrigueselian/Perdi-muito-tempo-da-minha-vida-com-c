#include <stdio.h>

main()
{
	int b[11], x, i, c=0;
	
	do
	{
		scanf("%d",&x);
		if(x<=0)
		break;
		c++;
		for (i = c; i > 0; i--)
		{
			b[i] = b[i-1];
		}
		b[0] = x;
		
		for (i = 0; i < c; i++)
		printf("%d ",b[i]);
		printf("\n");
	} while (x > 0 && c < 10);
} //dps faz um programa, que vai adicionando vetores e empurrando o resto
