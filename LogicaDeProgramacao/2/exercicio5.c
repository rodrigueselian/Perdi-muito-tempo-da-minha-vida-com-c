#include <stdio.h>

main()
{
	int a;
	
	printf("insira o ano em que voce nasceu:");
	scanf("%i",&a);
	
	if(a <= 2003)
	{
		printf("Pode votar");
	}
	else
	{
		printf("Nao pode votar");
	}
}
