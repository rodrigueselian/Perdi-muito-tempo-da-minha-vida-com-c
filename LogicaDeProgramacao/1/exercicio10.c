#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{
	float acrs,emp,salar,custo,bike,com,final,luc;
	
	acrs = 1.5;
	
	printf("insira o numero de empregados da loja:");
	scanf("%f",&emp);
	printf("insira o valor do salario minimo:");
	scanf("%f",&salar);
	printf("insira o preco de custo de cada bicicleta:");
	scanf("%f",&custo);
	printf("insira o numero de bicicletas vendidas:");
	scanf("%f",&bike);
	
	com = (((custo)*15)/100);
	final = (salar*2+(com*bike/emp));
	luc = ((((custo*acrs)*bike)-final*emp)-bike*custo);	
	
	printf("salario final de cada empregado:%f reais\n",final);
	printf("o lucro da loja obtido e de:%f reais\n",luc);
	system("pause");
}
