#include <stdio.h>

typedef struct {
	int n;
	float cco, cpo;
}conta;

void criaConta (int numero, conta *x);
void depositaNaConta (int sw, float valor, conta *x);
void retiraDaConta (int sw, float valor, conta *x);
float obtemSaldo (conta x);

main()
{
	conta oto;
	int sw, numero;
	float valor;
	printf("insira o numero da conta:");
	scanf("%d",&numero);
	criaConta(numero, &oto);
	do
	{
		printf(" 1.Deposito conta corrente\n 2.Deposito poupanca\n 3.Retira conta corrente\n 4.Retirada poupanca\n 5.Fim\n");
		scanf("%d",&sw);
		switch(sw)
		{
			case 1:
				printf("insira o valor do deposito:");
				scanf("%f",&valor);
				depositaNaConta(sw,valor,&oto);
				printf("saldo: R$%.2f\n",obtemSaldo(oto));
				break;
			case 2:
				printf("insira o valor do deposito:");
				scanf("%f",&valor);
				depositaNaConta(sw,valor,&oto);
				printf("saldo: R$%.2f\n",obtemSaldo(oto));
				break;
			case 3:
				printf("insira o valor da retirada:");
				scanf("%f",&valor);
				retiraDaConta(sw,valor,&oto);
				printf("saldo: R$%.2f\n",obtemSaldo(oto));
				break;
			case 4:
				printf("insira o valor da retirada:");
				scanf("%f",&valor);
				retiraDaConta(sw,valor,&oto);
				printf("saldo: R$%.2f\n",obtemSaldo(oto));
				break;
		}
	} while (sw != 5);
}

void criaConta (int numero, conta *x)
{
	x->n = numero;
	x->cco = 0;
	x->cpo = 0;
}

void depositaNaConta (int sw, float valor, conta *x) 
{
	if (sw == 1)
		x->cco += valor;
	else
		x->cpo += valor;
}
void retiraDaConta (int sw, float valor, conta *x)
{
	float dif;
	if (sw == 3)
	{
		if (x->cco >= valor)
		{
			x->cco -= valor;
		}
		else if (x->cco + x->cpo >= valor)
		{
			dif = x->cco - valor;
			x->cpo += dif;
			x->cco = 0;
		}
		else
		{
			printf("saldo insuficiente.\n");
		}
	}
	else
	{
		if (x->cpo >= valor)
			x->cpo -= valor;
		else
			printf("saldo insuficiente.\n");
	}
}

float obtemSaldo (conta x)
{
	float total;
	total = x.cco + x.cpo;
	return total;
}


