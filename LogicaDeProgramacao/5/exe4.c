#include <stdio.h>

main()
{
	int a, b;
	
	printf("insira dois numeros:\n");
	scanf("%i%i",&a,&b);
	
	while (a != b)
	{
		if (a < b)
		printf("Crescente\n");
		else
		printf("Decrescente\n");
		printf("insira dois numeros:\n");
		scanf("%i%i",&a,&b);
	}
}
