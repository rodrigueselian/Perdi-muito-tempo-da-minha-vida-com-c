#include <stdio.h>

typedef struct {
	int x, y;
}ponto;

typedef struct {
	ponto q, b;
}retangulo;

void criaRetangulo (int x1, int y1, int x2, int y2 ,retangulo *x);
int areaRetangulo (retangulo x);

main()
{
	retangulo base;
	int qx, qy, bx, by;
	printf("insira as coordenadas do ponto superior x e y respectivamente\n");
	scanf("%d%d",&qx,&qy);
	printf("insira as coordenadas do ponto superior x e y respectivamente\n");
	scanf("%d%d",&bx,&by);
	criaRetangulo(qx,qy,bx,by,&base);
	printf("%d",areaRetangulo(base));
}

void criaRetangulo (int x1, int y1, int x2, int y2 ,retangulo *x)
{
	ponto q, b;
	q.x = x1;
	q.y = y1;
	b.x = x2;
	b.y = y2;
	x->q = q;
	x->b = b;
}

int areaRetangulo (retangulo x)
{
	int area;
	if (x.q.x < 0)
	x.q.x = x.q.x*-1;
	if (x.q.y < 0)
	x.q.y = x.q.y*-1;
	if (x.b.x < 0)
	x.b.x = x.b.x*-1;
	if (x.b.y < 0)
	x.b.y = x.b.y*-1;
	
	area = (x.q.x + x.b.x) * (x.q.y + x.b.y);
	return area;
}
