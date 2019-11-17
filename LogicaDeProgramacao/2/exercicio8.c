#include <stdio.h>

main()
{
	int s;
	
	printf("insira a senha:");
	scanf("%i",&s);
	
	if(s == 1234)
	{
		printf("ACESSO PERMITIDO");
	}
	else
	{
		printf("ACESSO NEGADO");
	}
}
