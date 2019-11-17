#include <stdio.h>
#include <math.h>

typedef struct {
	float raio;
	int x, y;
}circulo;

void criaCirculo (circulo *o, int x, int y, float raio);
void exibeCirculo (circulo o);
void moveCirculo (circulo *o, int x, int y);
int comparaCirculos (circulo o, circulo y);
int estaDentroDoCirculo (circulo o, int c1, int c2);

main()
{
	circulo o1, o2;
	int x, y, maior;
	float raio;
	
	printf("Insira as coordenada x e y:");
	scanf("%d%d",&x,&y);
	printf("Insira o raio:");
	scanf("%f",&raio);
	criaCirculo(&o1, x, y, raio);
	
	printf("Insira as coordenada x e y:");
	scanf("%d%d",&x,&y);
	printf("Insira o raio:");
	scanf("%f",&raio);
	criaCirculo(&o2, x, y, raio);
	maior = comparaCirculos(o1,o2);
	if (maior == 1)
		printf("O Primeiro circulo e maior\n");
	else if (maior == -1)
		printf("O Segundo circulo e maior\n");
	else
		printf("Os Circulos tem o mesmo tamanho\n");
	exibeCirculo(o1);
	exibeCirculo(o2);
	scanf("%d%d",&x,&y);
	moveCirculo(&o2,x,y);
	exibeCirculo(o2);
}

void criaCirculo (circulo *o, int x, int y, float raio)
{
	o->x = x;
	o->y = y;
	o->raio = raio;
}

void exibeCirculo (circulo o)
{
	printf("raio: %f\n",o.raio);
	printf("coordenadas: %d %d\n",o.x,o.y);
}

void moveCirculo (circulo *o, int x, int y)
{
	o->x += x;
	o->y += y;
}

int comparaCirculos (circulo o, circulo o2)
{
	if (o.raio > o2.raio)
		return 1;
	else if (o.raio < o2.raio)
		return -1;
	else 
		return 0;
}

int estaDentroDoCirculo (circulo o, int c1, int c2)
{
	if (pow((o.x - c1),2) + pow((o.y - c2),2) > pow(o.raio,2))
		return 0;
	else
		return 1;
}
