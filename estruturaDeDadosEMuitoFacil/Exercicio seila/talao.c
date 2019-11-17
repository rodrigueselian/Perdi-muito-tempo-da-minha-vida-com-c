#include <stdio.h>
#include "talao.h"
#include "cheque.h"

void criaTalao (int nconta, int ncheque, talao *x)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		criaCheque(ncheque,&x->cheque[i]);
		ncheque++;
	}
}
void exibeTalao (talao x)
{
	int i;
	printf("N.Conta:%d",x.n);
	for (i = 0; i < 10; i++)
	{
		exibeCheque(x.cheque[i]);
	}
}
int emiteChequeDoTalao (talao *x, int ncheque, float valcheque)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (obtemNumero(x->cheque[i]) == ncheque)
		{
			return emiteCheque(&x->cheque[i], valcheque);
		}
	}
	return 1;
}
int compensaChequeDoTalao (talao *x, int ncheque, float valcheque)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (obtemNumero(x->cheque[i]) == ncheque)
		{
			return compensaCheque(&x->cheque[i]);;
		}
	}
	return 1;
}
float somaChequesDoTalao (talao x, int sit)
{
	float soma=0;
	int i;
	for (i = 0; i < 10; i++)
	{
		if (obtemSituacao(x.cheque[i]) == sit)
		{
			soma = soma + x.cheque[i].val;
		}
	}
	return soma;
}
