#include <stdio.h>
#include "pilha.h"

void exibe(PilhaCF p) {
	int i;
	
	printf("-------------\n");
	printf("pilha:\n");
	for (i=0; i<=p.topo; i++) 
		printf("%d %d\n", i,p.v[i]);
	printf("-------------\n\n");			
}
void criaPilha(PilhaCF *p)
{
	p->topo = -1; 
}
int empilha (PilhaCF *p, int dado)
{
	if(p->topo == MAX_NODOS - 1)
		return PILHA_CHEIA;
	else
		p->topo++;
		p->v[p->topo] = dado;
		return SUCESSO;
}
int desempilha (PilhaCF *p, int *dado)
{
	if(p->topo == -1)
		return PILHA_VAZIA;
	else
		*dado = p->v[p->topo];
		p->topo--;
		return SUCESSO;
}
int estaCheia (PilhaCF p)
{
	if (p.topo == MAX_NODOS - 1)
		return PILHA_CHEIA;
	else
		return SUCESSO;
}
int estaVazia (PilhaCF p)
{
	if(p.topo == -1)
		return PILHA_VAZIA;
	else
		return SUCESSO;
}
int consulta (PilhaCF p,int *dado)
{
	if(p.topo == -1)
		return PILHA_VAZIA;
	else	
		*dado = p.v[p.topo];
		return SUCESSO;
}
int procura (PilhaCF *p, int val)
{
	PilhaCF aux;
	int i, c=0, flag;
	criaPilha(&aux);
	for (i = MAX_NODOS-1; i >= 0; i--)
	{
		if (val == p->v[i])
		{
			flag = 1;
			break;
		}
		empilha(&aux,p->v[i]);
		p->topo--;
	}
	for (i = aux.topo; aux.topo != -1; i--)
	{
		p->topo++;
		aux.topo--;
	}
	if(flag == 1)
		return ENCONTRADO;
	else 
		return NAO_ENCONTRADO;
}
