#include <stdio.h>

main()
{
	int a, b, c;
	
	printf("informe 3 valores:");
	scanf("%i%i%i",&a , &b, &c);
	
	if (a > b){
		if (a > c)
		printf("o maior e:%i",a);
		else
		printf("o maior e:%i",c);
	}
	if (b > a){
		if (b > c)
		printf("o maior e:%i",b);
		else
		printf("o maior e:%i",c);
	}
}
