#include <stdio.h>
#include "FilaCir.h"

void exibe (FilaCF f)
{
	int i, c=1;
	printf("-------------\n");
	printf("Fila:\n");
	for (i=f.frente; c != f.tam+1; i++)
	{
		printf("P:%d V:%d D:%d\n", c,i,f.v[i]);
		c++;
		if (i == MAX_NODOS-1 && f.re < f.frente)
		i = -1;
	} 
	printf("-------------\n\n");	
}
void criaFila (FilaCF *f)
{
	f->frente = 0;
	f->re = -1;
	f->tam = 0;
}
int insere (FilaCF *f,int dado)
{
	int i;
	if (f->tam == MAX_NODOS)
		return FILA_CHEIA;
	if (f->re == MAX_NODOS-1)
		f->re = -1;
	f->re++;
	f->tam++;
	f->v[f->re] = dado;
	return SUCESSO;
}
int retira(FilaCF *f,int *dado)
{
	if (f->tam == 0)
		return FILA_VAZIA;
	*dado = f->v[f->frente];
	f->frente++;
	f->tam--;
	if (f->frente == MAX_NODOS)
		f->frente = 0;
	return SUCESSO;
}
int estaCheia(FilaCF f)
{
	if (f.tam == MAX_NODOS)
		return FILA_CHEIA;
	else
		return SUCESSO;
}
int estaVazia(FilaCF f)
{
	if (f.tam == 0)
		return FILA_VAZIA;
	else
		return SUCESSO;
}
int consulta(FilaCF f,int *dado)
{
	if (f.tam == 0)
		return FILA_VAZIA;
	else
		*dado = f.v[f.frente];
		return SUCESSO;
}
