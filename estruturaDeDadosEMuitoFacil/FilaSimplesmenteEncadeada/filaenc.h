#ifndef filaenc_H
#define filaenc_H

#define SUCESSO            0
#define FILA_VAZIA	       1
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
    Nodo *frente;
    Nodo *re;
} FilaEnc;

/*--------------------------------
*  Protótipos das funções
*/
void criaFila (FilaEnc *f);
int insere (FilaEnc *f, Dado d);
int retira (FilaEnc *f, Dado *d);
int estaVazia (FilaEnc f);
int consulta (FilaEnc f, Dado *d);
void exibe(FilaEnc f);

#endif
