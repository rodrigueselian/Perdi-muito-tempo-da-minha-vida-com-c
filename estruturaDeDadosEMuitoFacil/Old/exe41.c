#include <stdio.h>
#include <math.h>

typedef struct {
	float raio;
	int x, y;
}circulo;

void criaCirculo (circulo *o, int x, int y, float raio);
float areaCirculo (circulo o);
float perimetroCirculo (circulo o);

main()
{
	circulo o1, o2;
	int x, y;
	float area1, area2, raio;
	printf("Insira as coordenada x e y:");
	scanf("%d%d",&x,&y);
	printf("Insira o raio:");
	scanf("%f",&raio);
	criaCirculo(&o1, 0, 0, raio);
	printf("Insira o raio do segundo circulo:");
	scanf("%f",&raio);
	criaCirculo(&o2, 10, 30, raio);
	area1 = areaCirculo(o1);
	area2 = areaCirculo(o2);
	if (area1 > area2)
	printf("perimetro: %f",perimetroCirculo(o1));
	else
	printf("perimetro: %f",perimetroCirculo(o2));
}

void criaCirculo (circulo *o, int x, int y, float raio)
{
	o->x = x;
	o->y = y;
	o->raio = raio;
}

float areaCirculo (circulo o)
{
	float area;
	area = 3.14*(o.raio*o.raio);
	return area;
}

float perimetroCirculo (circulo o)
{
	float per;
	per = 2*3.14*o.raio;
	return per;
	
}

