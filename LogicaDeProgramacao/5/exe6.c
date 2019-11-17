#include <stdio.h>

main ()
{
	int a, b;
	
	printf("insira dois numeros:\n");
	scanf("%i",&a);
	
	while (a != 0)
	{
		scanf("%i",&b);
		if (a > 0 && b > 0){
			printf("primeiro\n");
			} else {
				if (a < 0 && b > 0){
					printf("segundo\n");
				} else {
					if (a < 0 && b < 0){
						printf("terceiro\n");
					} else {
						printf("quarto\n");
				}
			}		
		}
	printf("insira dois numeros:\n");
	scanf("%i",&a);
	}
}
