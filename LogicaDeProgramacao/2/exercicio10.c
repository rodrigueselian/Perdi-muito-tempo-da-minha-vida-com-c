#include <stdio.h>

main()
{
	int a,final;
	
	printf("insira um numero:");
	scanf("%i",&a);
	
	final = a%2;
	
	if (final == 0)
	{
		printf("par");
	}
	else
	{
		printf("impar");
	}
}
