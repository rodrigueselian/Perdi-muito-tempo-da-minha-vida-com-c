#include <stdio.h>

main()
{
	int x, y, q;
	
	printf("insira as coordenadas x e y respectivamente:\n");
	scanf("%i%i",&x ,&y);
	
	if (x > 0 && y > 0){
		printf("I");
	}
	if (x < 0 && y > 0){
		printf("II");
	}
	if (x < 0 && y < 0){
		printf("III");
	}
	if (x > 0 && y < 0){
		printf("IV");
	}
}
