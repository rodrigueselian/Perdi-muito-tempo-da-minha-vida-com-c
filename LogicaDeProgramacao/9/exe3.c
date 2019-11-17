#include <stdio.h>

main()
{
	int v1, v2, i, a;
	a = 0;
	printf("insira os dois valores em ordem crescente:\n");
	scanf("%d%d",&v1,&v2);
	
	for (i = v1; i <= v2; i++)
	{
		a = a+i;
	}
	printf("Soma = %d",a);
}
