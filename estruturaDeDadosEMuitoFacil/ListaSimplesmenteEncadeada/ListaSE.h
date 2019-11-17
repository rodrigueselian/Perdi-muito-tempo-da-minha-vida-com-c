/*--------------------------------
* Arquivo: ListaSE.h
*/

#ifndef ListaSE_H
#define ListaSE_H

#define SUCESSO            0
#define LISTA_VAZIA        1
#define FALTOU_MEMORIA     2
#define CODIGO_INEXISTENTE 3

typedef struct {
	int cod;
	float peso;
} Dado;

typedef struct nodo Nodo;


struct nodo {
	Dado info;
	Nodo *prox;
};

typedef struct {
    Nodo *inicio;
} ListaSE;

/*--------------------------------
*  Protótipos das funções
*/
void criaLista(ListaSE *lt);
int  incluiNoInicio(ListaSE *lt, Dado d);
void exibe(ListaSE lt);
int quantidadeDeNodos(ListaSE lt);
int estaVazia(ListaSE lt);
int excluiDoInicio(ListaSE *lt, Dado *d);
int incluiNoFim(ListaSE *lt, Dado d);
int excluiDoFim(ListaSE *lt, Dado *d);
int existe(ListaSE lt, int cod);
int consultaPorCodigo(ListaSE lt, int cod, Dado *d);
int incluiDepois(ListaSE *lt, int cod, Dado d);
int excluiNodo (ListaSE *lt, int cod, Dado *d);
void raioX(ListaSE lt);

#endif
