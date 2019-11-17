#include <stdio.h>
#include "pilha.h"

void exibeErro(int codErro);
void exibeErro(int codErro) {
	switch (codErro) {
		case SUCESSO           : printf("Operacao executada com sucesso\n");
					             break;
		case PILHA_VAZIA       : printf("Pilha vazia\n");
					             break;
		case PILHA_CHEIA       : printf("Pilha cheia\n");
					             break;
		case NAO_ENCONTRADO	   : printf("Nao encontrado\n");
								 break;
		case ENCONTRADO	   	   : printf("Encontrado\n");
								 break;						 
	}
	
}

int main() 
{
	PilhaCF pilha;
	int dado,pos,erro,op;
	
	criaPilha(&pilha);
	do 
	{
		printf("0-Fim\n");
		printf("1-Exibe pilhas\n");
		printf("2-Empilha\n");
		printf("3-Desempilha\n");		
		printf("4-Esta cheia\n");
		printf("5-Esta vazia\n");
		printf("6-Consulta\n");
		printf("7-Procura\n");

		scanf("%d",&op);	
		switch (op)
			{
			case 1:
				exibe(pilha);
				break;
			case 2: 
				scanf("%d",&dado);
				erro = empilha(&pilha,dado);
				exibeErro(erro);
				break;
			case 3:
				erro = desempilha(&pilha,&dado);
				exibeErro(erro);
				printf("Dado excluido: %d\n",dado);
				break;
			case 4:
				erro = estaCheia(pilha);
				if(erro == 0)
					printf("A pilha tem espaco.\n");
				else
					exibeErro(erro); 
				break;
			case 5: 
				erro = estaVazia(pilha);
				if(erro == 0)
					printf("A pilha nao esta vazia.\n");
				else
					exibeErro(erro); 
				break;
			case 6:
				erro = consulta(pilha,&dado);
				exibeErro(erro);
				printf("Dado do topo: %d\n",dado);
				break;	
			case 7:
				printf("insira o dado pra procurar:");
				scanf("%d",&dado);
				erro = procura(&pilha,dado);	
				exibeErro(erro);
			}
		if (op != 1)
			exibe(pilha);
	} while (op !=0);
	return 0;
}
