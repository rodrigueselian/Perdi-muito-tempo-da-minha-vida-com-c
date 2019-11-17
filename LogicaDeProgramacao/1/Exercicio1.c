#include <stdio.h>
#include <stdlib.h>

main()
{
	float a, b, c, t, q, r, ci;
		
	printf("Insira o valor de A:");
	scanf("%f",&a);
	printf("Insira o valor de B:");
	scanf("%f",&b);
	printf("Insira o valor de C:");
	scanf("%f",&c);
	
	t = a*b/2;
	q = b*b;
	r = a*b;
	ci = 3.14*c*c;
	
	printf("a area do triangulo e:%.0f.\n",t);
	printf("a area do quadrado e:%.0f.\n",q);
	printf("a area do retangulo e:%.0f.\n",r);
	printf("a area do circulo e:%f\n",ci);
	system("pause");
}
