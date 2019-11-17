#include <stdio.h>
#include "talao.h"
#include "cheque.h"

main()
{
	int n1,n2,sel,caso,sit;
	float val;
	talao us;
	printf("insira o numero da conta:");
	scanf("%d",&n1);
	printf("insira o numero do primeiro talão:");
	scanf("%d",&n2);
	criaTalao(n1,n2,&us);
	do
	{
		printf("0.fim\n");
		printf("1.Exibe talao\n");
		printf("2.Emite cheque\n");
		printf("3.Compensa cheque\n");
		printf("4.Soma cheques do talao\n");
		
		switch(sel)
		{
			case 1:
				exibeTalao(us);
				break;
			case 2:
				printf("insira o numero do cheque:");
				scanf("%d",&n1);
				printf("insira o valor do cheque:");
				scanf("%f",&val);
				caso = emiteChequeDoTalao(&us,n1,val);
				if (caso == 1)
					printf("ERRO\n");
				else
					printf("SUCESSO\n");
				break;
			case 3:
				printf("insira o numero do cheque:");
				scanf("%d",&n1);
				printf("insira o valor do cheque:");
				scanf("%f",&val);
				caso = emiteChequeDoTalao(&us,n1,val);
				if (caso == 1)
					printf("ERRO\n");
				else
					printf("SUCESSO\n");
				break;
			case 4:
				printf("insira a situacao do cheque:");
				scanf("%d",&sit);
				printf("Soma dos cheques:%f",somaChequesDoTalao(us,sit));
				break;
		}
		
	} while (sel != 0);
}
