#include <stdio.h>

main()
{
	int a, b;
	printf("insira um valor:");
	scanf("%i",&a);
	printf("insira outro valor:");
	scanf("%i",&b);
	
	if (a < b)
	{
		printf("o maior valor e:%i",b);
	}
	else
	{
		printf("o maior valor e:%i",a);
	}
}
