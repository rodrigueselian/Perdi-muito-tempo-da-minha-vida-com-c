#ifndef pilhaenc_H
#define pilhaenc_H

#define SUCESSO            0
#define PILHA_VAZIA        1
#define FALTOU_MEMORIA     2
#define CODIGO_INEXISTENTE 3

typedef struct nodo Nodo;

typedef struct {
	int cod;
	float peso;
} Dado;

struct nodo {
	Dado info;
	Nodo *prox;
};

typedef struct {
    Nodo *topo;
} PilhaEnc;

/*--------------------------------
*  Protótipos das funções
*/
void criaPilha (PilhaEnc *p);
int empilha (PilhaEnc *p, Dado d);
int desempilha (PilhaEnc *p, Dado *d);
int estaVazia (PilhaEnc p);
int consulta (PilhaEnc p, Dado *d);
void exibe(PilhaEnc p);

#endif
