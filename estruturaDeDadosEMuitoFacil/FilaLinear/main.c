#include <stdio.h>
#include "FilaL.h"

void exibeErro(int codErro);
void exibeErro(int codErro) 
{
	switch (codErro) 
	{
		case SUCESSO           : printf("Operacao executada com sucesso\n");
					             break;
		case FILA_VAZIA       : printf("Fila vazia\n");
					             break;
		case FILA_CHEIA       : printf("Fila cheia\n");
					             break;			 
	}
}

int main() 
{
	FilaCF f;
	int dado,pos,erro,op;
	
	criaFila(&f);
	do 
	{
		printf("0-Fim\n");
		printf("1-Exibe fila\n");
		printf("2-Insere\n");
		printf("3-Retira\n");		
		printf("4-Esta cheia\n");
		printf("5-Esta vazia\n");
		printf("6-Consulta\n");
		printf("7-Procura\n");

		scanf("%d",&op);	
		switch (op)
			{
			case 1:
				exibe(f);
				break;
			case 2: 
				scanf("%d",&dado);
				erro = insere(&f,dado);
				exibeErro(erro);
				break;
			case 3:
				erro = retira(&f,&dado);
				exibeErro(erro);
				printf("Dado retirado: %d\n",dado);
				break;
			case 4:
				erro = estaCheia(f);
				if(erro == 0)
					printf("A fila tem espaco.\n");
				else
					exibeErro(erro); 
				break;
			case 5: 
				erro = estaVazia(f);
				if(erro == 0)
					printf("A fila nao esta vazia.\n");
				else
					exibeErro(erro); 
				break;
			case 6:
				erro = consulta(f,&dado);
				exibeErro(erro);
				printf("Dado da frente: %d\n",dado);
				break;	
			case 7:
				printf("insira o dado pra procurar:");
				scanf("%d",&dado);
					
				exibeErro(erro);
			}
		if (op != 1)
			exibe(f);
	} while (op !=0);
	return 0;
}
