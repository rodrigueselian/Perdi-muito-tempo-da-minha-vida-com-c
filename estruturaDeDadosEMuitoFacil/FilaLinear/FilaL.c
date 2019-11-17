#include <stdio.h>
#include "FilaL.h"

void exibe (FilaCF f)
{
	int i, c=1;
	printf("-------------\n");
	printf("Fila:\n");
	for (i=f.frente; i<= f.re; i++)
	{
		printf("P:%d V:%d D:%d\n", c,i,f.v[i]);
		c++;
	} 
	printf("-------------\n\n");	
}
void criaFila (FilaCF *f)
{
	f->frente = 0;
	f->re = -1;
}
int insere (FilaCF *f,int dado)
{
	int i;
	if (f->re == MAX_NODOS - 1 && f->frente == 0)
		return FILA_CHEIA;
	else if (f->re == MAX_NODOS - 1)
	{
		for (i = 0; f->frente <= f->re; i++)
		{
			f->v[i] = f->v[f->frente];
			f->frente++;
		}
		f->frente = 0;
		f->re = i-1;
	}
	f->re++;
	f->v[f->re] = dado;
	return SUCESSO;
}
int retira(FilaCF *f,int *dado)
{
	if (f->re < f->frente)
		return FILA_VAZIA;
	else
		*dado = f->v[f->frente];
		f->frente++;
		return SUCESSO;
}
int estaCheia(FilaCF f)
{
	if (f.re == MAX_NODOS - 1 && f.frente == 0)
		return FILA_CHEIA;
	else
		return SUCESSO;
}
int estaVazia(FilaCF f)
{
	if (f.re < f.frente)
		return FILA_VAZIA;
	else
		return SUCESSO;
}
int consulta(FilaCF f,int *dado)
{
	if (f.re < f.frente)
		return FILA_VAZIA;
	else
		*dado = f.v[f.frente];
		return SUCESSO;
}
