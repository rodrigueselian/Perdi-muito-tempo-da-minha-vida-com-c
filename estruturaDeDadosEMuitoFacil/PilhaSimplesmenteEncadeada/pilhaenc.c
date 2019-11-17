#include <stdio.h>
#include <stdlib.h>
#include "pilhaenc.h"

void criaPilha (PilhaEnc *p)
{
	p->topo = NULL;
}

int empilha (PilhaEnc *p, int cod)
{
	Nodo *nNodo;
	
	nNodo = (Nodo *) malloc (sizeof(Nodo));
	if (nNodo == NULL)
		return FALTOU_MEMORIA;
	else {
		nNodo->info = cod;
		nNodo->prox = p->topo;
		p->topo = nNodo;
		return SUCESSO;
	}
}
int desempilha (PilhaEnc *p, int *cod)
{
	if (p->topo == NULL)
		return PILHA_VAZIA;
		
	Nodo *pAux;
	
	pAux = p->topo;
	cod = pAux->info;
	p->topo = pAux->prox;
	free(pAux);
	return SUCESSO;
}
int estaVazia (PilhaEnc p)
{
	if (p->topo == NULL)
		return PILHA_VAZIA;
	else
		return SUCESSO;
}
int consulta (PilhaEnc p, int *cod)
{
	if (p->topo == NULL)
		return PILHA_VAZIA;
	cod = p->topo.info;
	return SUCESSO;
}

void exibe(PilhaEnc p) {
	Nodo *pAux;
	
	printf("-------------\n");
	printf("Pilha:\n");
	if (p.topo == NULL)
		printf("Topo: NULL\n\n");
	else
		printf("Topo: %u\n\n", p.topo);
		
	pAux = p.topo;
	
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
