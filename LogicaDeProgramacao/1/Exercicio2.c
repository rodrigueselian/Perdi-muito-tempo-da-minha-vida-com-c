#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{
	float hrs,mph,chd,slr,rise,final;
	
	printf("Insira suas horas trabalhadas:");
	scanf("%f",&hrs);
	printf("Insira seu salario por hora:");
	scanf("%f",&mph);
	printf("Insira a quantidade de filhos:");
	scanf("%f",&chd);
	
	slr = mph*hrs;
	rise = (((chd*2)/100)*slr);
	final = slr+rise;
	
	printf("Seu salario e de:%f\n",final);
	system("pause");
}
