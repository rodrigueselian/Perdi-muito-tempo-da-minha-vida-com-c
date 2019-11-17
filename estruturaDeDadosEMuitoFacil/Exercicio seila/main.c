#include <stdio.h>
#include <stdlib.h>
#include "cheque.h"

int main() 
{
	cheque a, b;
	int n;
	float val, val2;
	printf("insira o numero do primeiro cheque:")
	scanf("%d",&n);
	criaCheque(n,&a);
	printf("insira o numero do segundo cheque:")
	scanf("%d",&n);
	criaCheque(n,&b);
	printf("insira o valor do primeiro cheque:")
	scanf("%f",&val);
	emiteCheque(&a,val);
	printf("insira o valor do segundo cheque:")
	scanf("%f",&val);
	emiteCheque(&b,val);
	exibeCheque(a);
	exibeCheque(b);
	val = obtemValor(a);
	val2 = obtemValor(b);
	if (val > val2)
		compensaCheque(&a);
	else
		compensaCheque(&b);
	printf("situacao do primeiro cheque:%d\n",obtemSituacao(a));
	printf("situacao do segundo cheque:%d\n",obtemSituacao(b));
	printf("Numero do primeiro cheque:%d\n",obtemNumero(a));
	printf("Numero do Segundo cheque:%d\n",obtemNumero(b));
	return 0;
}
