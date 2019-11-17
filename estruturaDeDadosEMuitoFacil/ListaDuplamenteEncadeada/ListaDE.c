/*--------------------------------
* Arquivo: ListaDE.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "ListaDE.h"

void criaLista(ListaDE *lt) 
{
	lt->inicio = NULL;
 	lt->fim = NULL;
 	lt->n = 0;
}

int incluiNoInicio(ListaDE *lt, Dado d) 
{
	Nodo *pNodo;
	
	pNodo = (Nodo *) malloc (sizeof (Nodo));
    if (pNodo==NULL)
		return FALTOU_MEMORIA;
	else 
	{
		pNodo->info=d; pNodo->ant=NULL; pNodo->prox=lt->inicio;
		lt->inicio = pNodo;
		if (lt->n == 0)
			lt->fim = pNodo;
	 	else
			lt->inicio->prox->ant = pNodo;
		lt->n++;
		return SUCESSO;
	}
}

void exibe(ListaDE lt) 
{
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

int quantidadeDeNodos(ListaDE lt)
{
	return lt.n;
}

int estaVazia(ListaDE lt)
{
	if (lt.inicio == NULL)
		return 1;
	else
		return 0;
}

int excluiDoInicio(ListaDE *lt, Dado *d)
{
	Nodo *pNodo;
	if (lt->n==0)
		return LISTA_VAZIA;
	else 
	{
		*d = lt->inicio->info;
		pNodo = lt->inicio;
		lt->inicio = lt->inicio->prox;
		if (lt->n == 1)
			lt->fim = NULL;
		else
			lt->inicio->ant = NULL;
		lt->n--;
		free (pNodo);
		return SUCESSO;
	}
}

int incluiNoFim(ListaDE *lt, Dado d)
{
	Nodo *pAux; Nodo *pNodo;
	
	pNodo = (Nodo *) malloc (sizeof (Nodo));
    if (pNodo==NULL)
		return FALTOU_MEMORIA;
	pNodo->info = d;
	pNodo->prox = NULL;
	pNodo->ant = lt->fim;
	if (lt->n == 0)
		lt->inicio = pNodo;
	else
		lt->fim->prox = pNodo;
	lt->fim = pNodo;
	lt->n++;
}
int excluiDoFim(ListaDE *lt, Dado *d)
{
	Nodo *pNodo;
	
	if (lt->n==0)
		return LISTA_VAZIA;
	else 
	{
		*d = lt->fim->info;
		pNodo = lt->fim;
		lt->fim = lt->fim->ant;
		if(lt->n == 1)
			lt->inicio = NULL;
		else
			lt->fim->prox = NULL;
		lt->n--;
		free (pNodo);
		return SUCESSO;
	}
}
int existe(ListaDE lt, int cod)
{
	Nodo *pAux;
	
	pAux = lt.inicio;
	
	if (lt.inicio == NULL)
		return LISTA_VAZIA;
	else
	while (pAux != NULL) 
	{
		if (pAux->info.cod == cod)
			return 1;
		pAux = pAux->prox;
	}
	return 0;
}
int consultaPorCodigo(ListaDE lt, int cod, Dado *d)
{
	Nodo *pAux;
	
	pAux = lt.inicio;
	
	if (lt.inicio == NULL)
		return LISTA_VAZIA;
	
	while (pAux != NULL) 
	{
		if (pAux->info.cod == cod)
		{
			*d = pAux->info;
			return SUCESSO;
		}
		pAux = pAux->prox;
	}
	return CODIGO_INEXISTENTE;
}
int incluiDepois(ListaDE *lt, int cod, Dado d)
{
	Nodo *pAux; Nodo *pNodo;
	
	pNodo = (Nodo *) malloc (sizeof (Nodo));
    if (pNodo==NULL)
		return FALTOU_MEMORIA;
	pAux = lt->inicio;
	while (pAux != NULL)
	{
		if(pAux->info.cod == cod)
		{
			pNodo->info = d;
			pNodo->ant = pAux;
			pNodo->prox = pAux->prox;
			if(pAux->prox == NULL)
			{
				pAux->prox = pNodo;
				lt->fim = pNodo;
			}
			else
			{
				pAux->prox->ant = pNodo;
				pAux->prox = pNodo;
			}
			lt->n++;
			return SUCESSO;
		}	
		pAux = pAux->prox;
	}
	return CODIGO_INEXISTENTE;
}

int excluiNodo (ListaDE *lt, int cod, Dado *d)
{
	Nodo *pAux; Nodo *pAux2;
	
	if (lt->inicio == NULL)
		return LISTA_VAZIA;
	pAux = lt->inicio;
	while (pAux != NULL)
	{
		if(pAux->info.cod == cod)
		{
			*d = pAux->info;
			if(lt->n == 1)
			{
				lt->inicio = NULL;
				lt->fim = NULL;
			}
			else if (pAux->prox == NULL)
			{
				pAux->ant->prox = pAux->prox; 
				lt->fim = pAux->ant;
			}
			else if (pAux->ant == NULL)
			{
				pAux->prox->ant = pAux->ant;
				lt->inicio = pAux->prox;
			}
			else
			{
				pAux->prox->ant = pAux->ant;
				pAux->ant->prox = pAux->prox;
			}
			free(pAux);
			lt->n--;
			return SUCESSO;
		}
		pAux = pAux->prox;
	}
	return CODIGO_INEXISTENTE;
}

void raioX(ListaDE lt) {
	Nodo *pAux;;
	
	printf("-------------\n");
	printf("Lista:\n");
	if (lt.inicio == NULL)
	{
		printf("Inicio: NULL\n");
		printf("Fim: NULL\n\n");
	}
	else
	{
		printf("Inicio: %u\n", lt.inicio);
		printf("Fim: %u\n\n",lt.fim);
	}
		
	pAux = lt.inicio;
	
	while (pAux != NULL) { 
		if(pAux->ant == NULL)
			printf("ant:NULL     ");
		else
			printf("ant:%u  ",pAux->ant);
		printf("Nodo:%u  Info:%d %.2f  prox: ",pAux,pAux->info.cod,pAux->info.peso);
		if ( pAux->prox == NULL)
			printf("NULL\n");
		else
			printf("%u\n",pAux->prox);
		pAux = pAux->prox;
	}
	printf("-------------\n\n");	
}
