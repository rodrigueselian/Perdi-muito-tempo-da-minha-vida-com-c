#include <stdio.h>

main()
{
	float lad, med, are, per;
	
	printf("insira a quantidade de lados:");
	scanf("%f",&lad);
	printf("insira a o tamanho dos lados:");
	scanf("%f",&med);
	
	if (lad < 3){
		printf("nao e um poligono");
	}
	if (lad == 3){
		per = med * 3;
		printf("triangulo, perimetro %f",per);
	}
	if (lad == 4){
		are = med * med;
		printf("quadrado, area %f",are);
	}
	if (lad == 5){
		printf("pentagono");
	}
	if (lad > 5){
		printf("poligono nao identificado");
	}
}
