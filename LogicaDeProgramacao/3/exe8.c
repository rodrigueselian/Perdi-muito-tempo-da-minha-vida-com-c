#include <stdio.h>

main()
{
	int a, b, c, r;
	
	printf("informe 3 valores:\n");
	scanf("%i%i%i",&a , &b, &c);
	
if (a > b) {
	if (a > c) {
		if (c > b){
			printf("o resultado e:%i %i %i",b ,c ,a);
		} else {
			printf("o resultado e:%i %i %i",c ,b ,a);
		}
	} else {
		printf("o resultado e:%i %i %i",b ,a ,c);
	}
} else {
	if (b > a){
		if (b > c){
			if (c > a){
				printf("o resultado e:%i %i %i",a ,c ,b);
			} else {
				printf("o resultado e:%i %i %i",c ,a ,b);
				}
		} else {
		printf("o resultado e:%i %i %i",a ,b ,c);
		}
	}
}
}
