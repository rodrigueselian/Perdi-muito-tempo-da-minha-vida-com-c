#ifndef FilaL_h
#define FilaL_h

#define SUCESSO 0 /* Códigos de erro */
#define FILA_VAZIA 1
#define FILA_CHEIA 2
#define MAX_NODOS 5

typedef struct {
 int v[MAX_NODOS];
 int frente; 
 int re;
} FilaCF;

void exibeFila (FilaCF f);
void criaFila (FilaCF *f);
int insere (FilaCF *f,int dado);
int retira(FilaCF *f,int *dado);
int estaCheia(FilaCF f);
int estaVazia(FilaCF f);
int consulta(FilaCF f,int *dado);

#endif
