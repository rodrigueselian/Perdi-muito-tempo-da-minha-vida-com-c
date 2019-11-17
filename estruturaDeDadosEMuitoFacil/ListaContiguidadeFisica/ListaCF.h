/*--------------------------------
* Arquivo: ListaCF.h
*/

#ifndef ListaCF_H
#define ListaCF_H

#define MAX_NODOS 5

#define SUCESSO            0
#define LISTA_VAZIA        1
#define LISTA_CHEIA        2
#define POSICAO_INVALIDA   3
#define CODIGO_INEXISTENTE 4

typedef struct {
	int cod;
	float peso;
} Dado;

typedef struct {
    int n;
	Dado v[MAX_NODOS];
} ListaCF;

void criaLista(ListaCF *lt);
int  incluiNoFim(ListaCF *lt, Dado d);
void exibe(ListaCF lt);
int quantidadeDeNodos(ListaCF lt);
int estaCheia(ListaCF lt);
int estaVazia(ListaCF lt);
int excluiDoFim(ListaCF *lt, Dado *d);
int incluiNoInicio(ListaCF *lt, Dado d);
int excluiDoInicio(ListaCF *lt, Dado *d);
int consultaPorPosicao(ListaCF lt, int pos, Dado *d);
int existe(ListaCF lt, int cod);
int consultaPorCodigo(ListaCF *lt, int cod, Dado *d);
int incluiNaPosicao(ListaCF *lt, int pos, Dado d);
int excluiDaPosicao(ListaCF *lt, int pos, Dado *d);
int incluiAntes(ListaCF *lt, int cod, Dado d);
int excluiNodo(ListaCF *lt, int cod, Dado *d);

#endif
