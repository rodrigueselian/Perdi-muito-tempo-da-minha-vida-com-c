#include <stdio.h>

main()
{
	int x;
	
	printf("insira um numero:");
	scanf("%i",&x);
	
	while (x != 0) {
		if (x < 0){
			printf("Negativo\n");
		} else {
			printf("Positivo\n");
		}
		printf("insira um numero:");
		scanf("%i",&x);
	}
}
