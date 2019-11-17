#include <stdio.h>

main()
{
	int a, b, c;
	
	printf("insira os 3 angulos do triangulo:\n");
	scanf("%i%i%i",&a,&b,&c);
	
	if (a == 90 || b == 90 || c == 90){
		printf("Retangulo");
	} else {
		if (a < 90 && b < 90 && c < 90){
			printf("Acutangulo");
		} else {
			printf("Obtusangulo");
		}
	}
}
