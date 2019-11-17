/*--------------------------------
* Arquivo: ListaCF.c
*/

#include <stdio.h>
#include "ListaCF.h"

void criaLista(ListaCF *lt) {
	lt->n = 0;
}

int incluiNoFim(ListaCF *lt, Dado d) {
	if (lt->n == MAX_NODOS)
		return LISTA_CHEIA;
	else {
		lt->v[lt->n] = d;
		lt->n++;
		return SUCESSO;
	}	
}

void exibe(ListaCF lt) {
	int i;
	
	printf("-------------\n");
	printf("Lista:\n");
	for (i=0; i<lt.n; i++) 
		printf("   %d %.2f\n", lt.v[i].cod,lt.v[i].peso);
	printf("-------------\n\n");			
}
int quantidadeDeNodos(ListaCF lt)
{
	return lt.n;
}
int estaCheia(ListaCF lt)
{
	if (lt.n == MAX_NODOS)
		return LISTA_CHEIA;
	else
		return SUCESSO;
}
int estaVazia(ListaCF lt)
{
	if (lt.n <= 0)
		return LISTA_VAZIA;
	else
		return SUCESSO;
}
int excluiDoFim(ListaCF *lt, Dado *d)
{
	if (lt->n <= 0)
		return LISTA_VAZIA;
	else
		*d = lt->v[lt->n-1];
		lt->n--;
		return SUCESSO;
}
int incluiNoInicio(ListaCF *lt, Dado d)
{
	int i;
	if (lt->n == MAX_NODOS)
		return LISTA_CHEIA;
	else
		for (i = lt->n; i > 0; i--)
			lt->v[i] = lt->v[i-1];
		lt->v[0] = d;
		lt->n++;
		return SUCESSO;
	
}
int excluiDoInicio(ListaCF *lt, Dado *d)
{
	int i;
	if (lt->n <= 0)
		return LISTA_VAZIA;
	else
		for (i = 0; i < lt->n; i++)
			lt->v[i] = lt->v[i+1];
		lt->n--;
		return SUCESSO;
}
int consultaPorPosicao(ListaCF lt, int pos, Dado *d)
{
	if (pos < 0 && pos >= lt.n)
		return POSICAO_INVALIDA;
	else
		*d = lt.v[pos];
		return SUCESSO;
}
int existe(ListaCF lt, int cod)
{
	int i;
	for (i = 0; i < lt.n; i++)
	{
		if (cod == lt.v[i].cod)
			return 1;
	}
	return 0;
}
int consultaPorCodigo(ListaCF *lt, int cod, Dado *d)
{
	int i;
	for (i = 0; i < lt->n; i++)
	{
		if (cod == lt->v[i].cod)
		{
			*d = lt->v[i];
			return SUCESSO;
		}
	}
	return CODIGO_INEXISTENTE;
}
int incluiNaPosicao(ListaCF *lt, int pos, Dado d)
{
	int i;
	if (lt->n == MAX_NODOS)
		return LISTA_CHEIA;
	else if (pos < 0 && pos >= lt->n)
		return POSICAO_INVALIDA;
	else
		for (i = lt->n; i > pos; i--)
			lt->v[i] = lt->v[i-1];
		lt->v[pos] = d;
		lt->n++;
		return SUCESSO;
}
int excluiDaPosicao(ListaCF *lt, int pos, Dado *d)
{
	int i;
	if (lt->n <= 0)
		return LISTA_VAZIA;
	else if (pos < 0 && pos >= lt->n)
		return POSICAO_INVALIDA;
	else
		for (i = pos; i < lt->n; i++)
			lt->v[i] = lt->v[i+1];
		lt->n--;
		return SUCESSO;
}
int incluiAntes(ListaCF *lt, int cod, Dado d)
{
	int i, pos = -1;
	if (lt->n == MAX_NODOS)
		return LISTA_CHEIA;
	else 
		for (i = 0; i < lt->n; i++)
		{
			if(cod == lt->v[i].cod)
			pos = i;
		}
		if (pos == -1)
			return CODIGO_INEXISTENTE;
		else
			for (i = lt->n; i > pos; i--)
				lt->v[i] = lt->v[i-1];
			lt->v[pos] = d;
			lt->n++;
			return SUCESSO;
}
int excluiNodo(ListaCF *lt, int cod, Dado *d)
{
	int i, pos = -1;
	if (lt->n <= 0)
		return LISTA_VAZIA;
	else 
		for (i = 0; i < lt->n; i++)
		{
			if(cod == lt->v[i].cod)
			pos = i;
		}
		if (pos == -1)
			return CODIGO_INEXISTENTE;
		else
			for (i = pos; i < lt->n; i++)
				lt->v[i] = lt->v[i+1];
			lt->n--;
			return SUCESSO;
}
