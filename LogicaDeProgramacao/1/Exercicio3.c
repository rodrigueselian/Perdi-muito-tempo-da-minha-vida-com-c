#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{
	float slr,rise,final;
	
	printf("Insira seu salario mensal:");
	scanf("%f",&slr);
	printf("Insira o reajuste:");
	scanf("%f",&rise);
	
	final = (((rise/100)*slr)+slr);
	
	printf("Seu salario reajustado e:%f\n",final);
	system("pause");
}
