#include <stdio.h>

main()
{
	int x;
	
	do {
		printf("insira um numero:");
		scanf("%i",&x);
		if (x < 0){
			printf("Negativo\n");
		} else {
			if (x == 0)
			break;
			else
			printf("Positivo\n");
		}
	}
	while (x != 0);
}
