#include <stdio.h>

main()
{
	int a, b;
	
	printf("insira o primeiro valor:");
	scanf("%i",&a);
	printf("insira o segundo valor:");
	scanf("%i",&b);
	
	if(a < b)
	{
		printf("%i %i",a,b);
	}
	else
	{
		printf("%i %i",b,a);
	}
}
