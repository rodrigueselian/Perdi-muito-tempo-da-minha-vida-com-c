#include <stdio.h>

main()
{
	int senha;
	printf("insira a senha:\n");
	scanf("%i",&senha);
	if (senha == 2009)
	printf("Acesso Permitido");
	else
	while (senha != 2009)
	{
		printf("Senha Invalida!\n");
		scanf("%i",&senha);		
	}
	printf("Acesso Permitido");
}
