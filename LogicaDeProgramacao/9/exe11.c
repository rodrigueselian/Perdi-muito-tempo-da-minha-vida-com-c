#include <stdio.h>

main()
{
	int a, n, i, c;
	
	printf("insira os dois numeros:\n");
	scanf("%d",&a);
	do
	{
		scanf("%d",&n);
	} while (n <= 0);
	
	c = a+1;
	for (i = 1; i <= n-1; i++)
	{
		a = a+c;
		c++;
	}
	printf("%d",a);
}

