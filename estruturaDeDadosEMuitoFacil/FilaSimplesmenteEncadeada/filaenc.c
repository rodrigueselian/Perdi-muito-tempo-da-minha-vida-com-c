#include <stdio.h>
#include <stdlib.h>
#include "filaenc.h"

void criaFila (FilaEnc *f)
{
	f->frente = NULL;
	f->re = NULL;
}

int insere (FilaEnc *f, Dado d)
{
	Nodo *nNodo, *pAux;
	
	nNodo = (Nodo *) malloc (sizeof(Nodo));
	nNodo->info = d;
	nNodo->prox = NULL;
	pAux = f->frente;
	if(f->frente == NULL)
	{
		f->frente = nNodo;
		f->re = nNodo;
		return SUCESSO;
	}
	else
	{
		f->re->prox = nNodo;
		f->re = nNodo;
		return SUCESSO;
	}
}

int retira (FilaEnc *f, Dado *d)
{
	Nodo *pAux;
	
	if (f->frente == NULL && f->re == NULL)
		return FILA_VAZIA;
	*d = f->frente->info;
	pAux = f->frente;
	f->frente = f->frente->prox;
	free(pAux);
	return SUCESSO;
}

int estaVazia (FilaEnc f)
{
	if (f.frente = NULL && f.re == NULL)
		return FILA_VAZIA;
	else
		return SUCESSO;
}

int consulta (FilaEnc f, Dado *d)
{
	if (f.frente == NULL && f.re == NULL)
		return FILA_VAZIA;
	*d = f.frente->info;
	return SUCESSO;
}

void exibe(FilaEnc f) {
	Nodo *pAux;
	
	printf("-------------\n");
	printf("Fila:\n");
	if (f.frente == NULL)
		printf("Frente: NULL\n\n");
	else
	{
		printf("Frente: %u\n", f.frente);
		printf("Re: %u\n\n", f.re);
	}
		
	pAux = f.frente;
	
	while (pAux != NULL) { 
		printf("%u:   %d %.2f  prox: ", pAux,pAux->info.cod,pAux->info.peso);
		if ( pAux->prox == NULL)
			printf("NULL\n");
		else
			printf("%u\n",pAux->prox);
		pAux = pAux->prox;
	}
	printf("-------------\n\n");	
}
