#include <stdio.h>
#include "ListaCF.h"

void exibeErro(int codErro);
void exibeErro(int codErro) {
	switch (codErro) {
		case SUCESSO           : printf("Operacao executada com sucesso\n");
					             break;
		case LISTA_VAZIA       : printf("Lista vazia\n");
					             break;
		case LISTA_CHEIA       : printf("Lista cheia\n");
					             break;
		case POSICAO_INVALIDA  : printf("Posicao invalida\n");
					             break;
		case CODIGO_INEXISTENTE: printf("Codigo inexistente\n");
					             break;
	}
	
}

int main() {
	ListaCF lista;
	Dado dado, dado2;
	int cod,pos,erro,op;
	
	criaLista(&lista);
	do {
		printf("0-Fim\n");
		printf("1-Inclui no fim\n");
		printf("2-Exibe lista\n");		
		printf("3-Quantidade de nodos\n");
		printf("4-Exibe situacao da lista\n");
		printf("5-Exclui do fim\n");
		printf("6-Inclui no inicio\n");
		printf("7-Exclui do inicio\n");
		printf("8-Consulta por posicao\n");
		printf("9-Verifica existencia\n");	
		printf("10-Consulta por codigo\n");	
		printf("11-Inclui na posicao\n");
		printf("12-Exclui da posicao\n");
		printf("13-Inclui antes\n");		
		printf("14-Exclui nodo\n\n");	
		printf("Informe a operacao:");
		scanf("%d",&op);
		
		switch (op)
			{
			case 1:
				printf("Informe o codigo:");
				scanf("%d",&dado.cod);
				printf("Informe o peso:");
				scanf("%f",&dado.peso);
				erro = incluiNoFim(&lista,dado);
				exibeErro(erro); 			
				break;
			case 2: 
				exibe(lista);
				break;
			case 3:
				printf("Quantidade de nodos: %d\n",quantidadeDeNodos(lista));
				break;
			case 4:
				erro = estaCheia(lista);
				erro = erro+estaVazia(lista);
				if(erro == 0)
				printf("A lista tem espaco.\n");
				else
				exibeErro(erro); 
				break;
			case 5: 
				excluiDoFim(&lista,&dado);
				printf("Dado excluido: %d %f\n",dado.cod,dado.peso);
				break;
			case 6:
				printf("insira o cod do dado:");
				scanf("%d",&dado.cod);
				printf("insira o peso:");
				scanf("%f",&dado.peso);
				erro = incluiNoInicio(&lista,dado);
				exibeErro(erro);
				break;
			case 7:
				erro = excluiDoInicio(&lista,&dado);
				exibeErro(erro);
				if(erro == SUCESSO)
					printf("Dado excluido: %d %f\n",dado.cod,dado.peso);
				break;
			case 8:
				printf("insira a posicao:");
				scanf("%d",&pos);
				erro = consultaPorPosicao(lista,pos,&dado);
				exibeErro(erro);
				if (erro == SUCESSO)
					printf("Dado da posicao %d: %d %f\n",pos,dado.cod,dado.peso);
				break;
			case 9: 
				printf("insira o codigo do dado:");
				scanf("%d",&cod);
				erro = existe(lista,cod);
				if (erro == 1)
					printf("Existe.\n");
				else
					printf("Nao existe.\n");
				break;
			case 10: 
				printf("insira o codigo do dado:");
				scanf("%d",&cod);
				erro = consultaPorCodigo(&lista,cod,&dado);
				exibeErro(erro);
				if (erro == SUCESSO)
					printf("Dado: %d %f\n",dado.cod,dado.peso);
				break;
			case 11:
				printf("insira a posicao do dado:");
				scanf("%d",&pos);
				printf("insira o cod do dado:");
				scanf("%d",&dado.cod);
				printf("insira o peso:");
				scanf("%f",&dado.peso);
				erro = incluiNaPosicao(&lista,pos,dado);
				exibeErro(erro); 
				break;
			case 12:
				printf("insira a posicao do dado:");
				scanf("%d",&pos);
				erro = excluiDaPosicao(&lista,pos,&dado);
				exibeErro(erro);
				if (erro == SUCESSO)
					printf("Dado excluido: %d %f\n",dado.cod,dado.peso);
				break;			
			case 13:
				printf("insira o codigo de referencia do dado:");
				scanf("%d",&cod);
				printf("insira o cod do dado:");
				scanf("%d",&dado.cod);
				printf("insira o peso:");
				scanf("%f",&dado.peso);
				erro = incluiAntes(&lista,cod,dado);
				exibeErro(erro);
				break;
			case 14:
				printf("insira o codigo de referencia do dado:");
				scanf("%d",&cod);
				erro = excluiNodo(&lista,cod,&dado);
				exibeErro(erro);
				if (erro == SUCESSO)
					printf("Dado excluido: %d %f\n",dado.cod,dado.peso);
				break;			
			}
		if (op != 2)
			exibe(lista);

	} while (op !=0);

	return 0;
}
