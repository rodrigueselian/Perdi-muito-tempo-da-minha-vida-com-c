#include <stdio.h>

main()
{
	int senha;
	printf("insira a senha:\n");
	scanf("%i",&senha);
	while (senha != 2009)
	{
		printf("Senha Invalida!\n");
		scanf("%i",&senha);
	}
	printf("Acesso permitido");
}
