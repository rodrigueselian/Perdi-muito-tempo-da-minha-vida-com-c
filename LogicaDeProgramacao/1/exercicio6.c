#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{
	float comp,larg,alt,tam,parede,parede2,res;
	
	printf("insira o comprimento em metros:");
	scanf("%f",&comp);
	printf("insira a largura em metros:");
	scanf("%f",&larg);
	printf("insira a altura em metros:");
	scanf("%f",&alt); 
	printf("quantos m2 ha na caixa de azulejo:");
	scanf("%f",&tam);
	
	parede = alt*comp*2;
	parede2 = alt*larg*2;
	res = (parede+parede2)/tam;	
	printf("voce precisara de %f caixas de azulejo de %f metro quadrado\n",res,tam);
	system("pause");
}
