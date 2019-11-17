#include <stdio.h>
#include "cheque.h"

void criaCheque (int n, cheque *x)
{
	x->num = n;
	x->sit = 0;
	x->val = 0;
}
void exibeCheque (cheque x)
{
	printf("Numero:%d Saldo:%f situacao: ",x.num,x.val);
	if (x.sit == 0)
		printf("em branco\n");
	else if (x.sit == 1)
		printf("emitido\n");
	else
		printf("compensado\n");
}
int obtemSituacao (cheque x)
{
	return x.sit;
}
float obtemValor (cheque x)
{
	return x.val;
}
int obtemNumero (cheque x)
{
	return x.num;
}
int compensaCheque (cheque *x)
{
	if (x->sit == 1)
	{
		x->sit = 2;
		return 0;
	}
	else
		return 1;		
}
int emiteCheque (cheque *x, float val)
{
	if (x->sit == 0)
	{
		x->val = val;
		x->sit = 1;
		return 0;
	}
	else
		return 1;
}

