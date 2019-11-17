#include <stdio.h>

main()
{
	int a, b, c, r;
	
	printf("informe 3 valores:\n");
	scanf("%i%i%i",&a , &b, &c);
	
if (a > b) {
	if (a > c) {
		if (c > b){
			r = a+c;
			printf("o resultado e:%i",r);
		} else {
			r = a+b;
			printf("o resultado e:%i",r);
		}
	} else {
		r = a+c;
		printf("o resultado e:%i",r);
	}
} else {
	if (b > a){
		if (b > c){
			if (c > a){
				r = b+c;
				printf("o resultado e:%i",r);
			} else {
				r = b+a;
				printf("o resultado e:%i",r);
				}
		} else {
		r = b+c;
		printf("o resultado e:%i",r);
		}
	}
}
}
