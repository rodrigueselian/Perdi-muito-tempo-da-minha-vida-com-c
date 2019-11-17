#include <stdio.h>

main()
{
	int a;
	
	printf("Insira um numero:");
	scanf("%i",&a);
	
if (a >=0) /*ate 2.147.483.647, mais que isso fica negativo*/
{
	printf("positivo");
}
else
{
	printf("negativo");
}
}
