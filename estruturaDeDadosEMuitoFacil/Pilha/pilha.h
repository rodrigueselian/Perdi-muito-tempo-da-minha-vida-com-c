/*--------------------------------
* Arquivo: pilha.h
*/
#ifndef pilha_h
#define pilha_h

#define SUCESSO 0 /* Códigos de erro */
#define PILHA_VAZIA 1
#define PILHA_CHEIA 2
#define NAO_ENCONTRADO 3
#define ENCONTRADO 4
#define MAX_NODOS 5

typedef struct {
 int v[MAX_NODOS];
 int topo; /* índice do topo */
} PilhaCF;

void criaPilha(PilhaCF *p);
int empilha (PilhaCF *p, int dado);
int desempilha (PilhaCF *p, int *dado);
int estaCheia (PilhaCF p);
int estaVazia (PilhaCF p);
int consulta (PilhaCF p,int *dado);
int procura (PilhaCF *p, int val);

#endif
