#include <stdio.h>

main()
{
	float a, b, m;
	
	printf("insira sua primeira nota:");
	scanf("%f",&a);
	printf("insira sua segunda nota:");
	scanf("%f",&b);
	
	m = (a+b)/2;
	printf("sua media e de: %f\n",m);

if (m >= 6)
 {
 printf("Parabens! voce foi aprovado");
 }
 else
 {
 printf("voce foi reprovado! por favor estude mais");
 }
}
