#include <stdio.h>

main()
{
	int v1, v2, i, a, menor, maior;
	a = 0;
	
	printf("insira os dois valores em ordem crescente:\n");
	scanf("%d%d",&v1,&v2);
	
	if (v1 < v2)
	{
		menor = v1;
		maior = v2;
	}
	else
	{
		menor = v2;
		maior = v1;
	}
	
	for (i = menor; i <= maior; i++)
	{
		a = a+i;
	}
	printf("Soma = %d",a);
}
