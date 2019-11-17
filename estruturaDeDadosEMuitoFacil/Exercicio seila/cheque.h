#ifndef cheque_h
#define cheque_h

typedef struct {
	int num, sit;
	float val;
} cheque;

void criaCheque (int num, cheque *x);
void exibeCheque (cheque x);
int obtemSituacao (cheque x);
float obtemValor (cheque x);
int obtemNumero (cheque x);
int compensaCheque (cheque *x);
int emiteCheque (cheque *x, float val);

#endif
