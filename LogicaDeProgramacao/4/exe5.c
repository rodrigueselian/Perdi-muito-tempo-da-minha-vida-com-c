#include <stdio.h>

main()
{
	int a, b, c;
	
	printf("insira os 3 lados do triangulo:\n");
	scanf("%i%i%i",&a,&b,&c);
	
	if (a == b && b == c){
		printf("Equilatero");
	} else {
		if (a != b && a != c && b != c){
			printf("Escaleno");
		} else {
			printf("Isoceles");
		}
	}
}
