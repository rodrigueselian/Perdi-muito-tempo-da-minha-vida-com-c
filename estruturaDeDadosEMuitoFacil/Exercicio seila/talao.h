#include "cheque.h"
#ifndef talao_h
#define talao_h

typedef struct {
	int n;
	cheque cheque[10];
}talao;

void criaTalao (int nconta, int ncheque, talao *x);
void exibeTalao (talao x);
int emiteChequeDoTalao (talao *x, int ncheque, float valcheque);
int compensaChequeDoTalao (talao *x, int ncheque, float valcheque);
float somaChequesDoTalao (talao x, int sit);

#endif
