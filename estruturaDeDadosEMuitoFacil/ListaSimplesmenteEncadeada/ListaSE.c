/*--------------------------------
* Arquivo: ListaSE.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "ListaSE.h"

/*-----------------
* S: uma lista
*/
void criaLista(ListaSE *lt) {
	lt->inicio = NULL;
}

/*-----------------
* E/S: uma lista
* E: um dado
* R: SUCESSO ou FALTOU_MEMORIA
*/
int incluiNoInicio(ListaSE *lt, Dado d) {
	Nodo *pNodo;
	
	pNodo = (Nodo *) malloc (sizeof(Nodo));
	if (pNodo == NULL)
		return FALTOU_MEMORIA;
	else {
		pNodo->info = d;
		pNodo->prox = lt->inicio;
		lt->inicio = pNodo;
		return SUCESSO;
	}
}

/*-----------------
* E: uma lista
*/
void exibe(ListaSE lt) {
	Nodo *pAux;
	
	printf("-------------\n");
	printf("Lista:\n");
	pAux = lt.inicio;
	
	while (pAux != NULL) { 
		printf("   %d %.2f\n", pAux->info.cod,pAux->info.peso);
		pAux = pAux->prox;
	}
	printf("-------------\n\n");	
}

int quantidadeDeNodos(ListaSE lt)
{
	Nodo *pAux;
	int c=0;
	
	pAux = lt.inicio;
	
	while (pAux != NULL) { 
		c++;
		pAux = pAux->prox;
	}
	return c;
}
int estaVazia(ListaSE lt)
{
	if (lt.inicio == NULL)
		return 1;
	else
		return 0;
}
int excluiDoInicio(ListaSE *lt, Dado *d)
{
	Nodo *pAux;

	if (lt->inicio==NULL)
		return LISTA_VAZIA;
	else
		pAux = lt->inicio;
		*d = pAux->info;
		lt->inicio = lt->inicio->prox;
		free(pAux);
		return SUCESSO;
}
int incluiNoFim(ListaSE *lt, Dado d)
{
	Nodo *pAux; Nodo *nNodo;
	
	nNodo = (Nodo *) malloc (sizeof(Nodo));
	if (nNodo == NULL)
		return FALTOU_MEMORIA;
	else 
	{
		nNodo->info = d;
		nNodo->prox = NULL;
	}
	if (lt->inicio == NULL)
	{
		lt->inicio = nNodo;
		return SUCESSO;
	}
	else
	{
		pAux = lt->inicio;
		while (pAux->prox != NULL) 
		{ 
			pAux = pAux->prox;
		}
		pAux->prox = nNodo;
		return SUCESSO;	
	}
}
int excluiDoFim(ListaSE *lt, Dado *d)
{
	Nodo *pAux; Nodo *pAux2;
	
	pAux = lt->inicio;
	
	if (lt->inicio == NULL)
		return LISTA_VAZIA;
	if (pAux->prox == NULL)
	{
		*d = pAux->info;
		lt->inicio = NULL;
		free(pAux);
		return SUCESSO;
	}
	else
		while (pAux->prox->prox != NULL) 
		{ 
			pAux = pAux->prox;
		}
		*d = pAux->prox->info;
		pAux2 = pAux->prox;
		pAux->prox = NULL;
		free(pAux2);
		return SUCESSO;
}
int existe(ListaSE lt, int cod)
{
	Nodo *pAux;
	
	pAux = lt.inicio;
	
	if (lt.inicio == NULL)
		return LISTA_VAZIA;
	else
	while (pAux->prox != NULL) 
	{
		if (pAux->info.cod == cod)
			return 1;
		pAux = pAux->prox;
	}
	if (pAux->info.cod == cod)
			return 1;
	return 0;
}
int consultaPorCodigo(ListaSE lt, int cod, Dado *d)
{
	Nodo *pAux;
	
	pAux = lt.inicio;
	
	if (lt.inicio == NULL)
		return LISTA_VAZIA;
	
	while (pAux->prox != NULL) 
	{
		if (pAux->info.cod == cod)
		{
			*d = pAux->info;
			return SUCESSO;
		}
		pAux = pAux->prox;
	}
	if (pAux->info.cod == cod)
	{
		*d = pAux->info;
		return SUCESSO;
	}
	return CODIGO_INEXISTENTE;
}
int incluiDepois(ListaSE *lt, int cod, Dado d)
{
	Nodo *pAux; Nodo *nNodo;
	
	pAux = lt->inicio;
	while (pAux->prox != NULL)
	{
		if (pAux->info.cod == cod)
		{
			nNodo = (Nodo *) malloc (sizeof(Nodo));
			if (nNodo == NULL)
				return FALTOU_MEMORIA;
			nNodo->info = d;
			nNodo->prox = pAux->prox;
			pAux->prox = nNodo;
			return SUCESSO;
		}
		pAux = pAux->prox;
	}
	if (pAux->info.cod == cod)
	{
		nNodo = (Nodo *) malloc (sizeof(Nodo));
		if (nNodo == NULL)
			return FALTOU_MEMORIA;
		nNodo->info = d;
		nNodo->prox = pAux->prox;
		pAux->prox = nNodo;
		return SUCESSO;
	}		
	return CODIGO_INEXISTENTE;
}

int excluiNodo (ListaSE *lt, int cod, Dado *d)
{
	Nodo *pAux; Nodo *pAux2;
	
	if (lt->inicio == NULL)
		return LISTA_VAZIA;
		
	pAux = lt->inicio;
	if (pAux->info.cod == cod)
	{
		*d = pAux->info;
		if (pAux->prox != NULL)
		{
			lt->inicio = pAux->prox;
			free(pAux);
			return SUCESSO;
		}	
		lt->inicio = NULL;
		free(pAux);
		return SUCESSO;
	}
	while (pAux->prox != NULL)
	{
		if (pAux->prox->info.cod == cod)
		{
			*d = pAux->prox->info;
			pAux2 = pAux->prox;
			pAux->prox = pAux->prox->prox;
			free(pAux2);
			return SUCESSO;
		}
		pAux = pAux->prox;
	}
	return CODIGO_INEXISTENTE;
}

void raioX(ListaSE lt) {
	Nodo *pAux;;
	
	printf("-------------\n");
	printf("Lista:\n");
	if (lt.inicio == NULL)
		printf("inicio: NULL\n\n");
	else
		printf("inicio: %u\n\n", lt.inicio);
		
	pAux = lt.inicio;
	
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
