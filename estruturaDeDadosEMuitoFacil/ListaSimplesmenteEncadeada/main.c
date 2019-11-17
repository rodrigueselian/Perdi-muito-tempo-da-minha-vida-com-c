/*--------------------------------
* Arquivo: Exerc-9-2.c
*/
#include <stdio.h>
#include "ListaSE.h"

/*----------------------
* Prototipos
*/ 

void exibeErro(int codErro);

/*----------------------
*  E: Codigo de erro
*/
void exibeErro(int codErro) {
	switch (codErro) {
		case SUCESSO           : printf("Operacao executada com sucesso\n");
					             break;
		case LISTA_VAZIA       : printf("Lista vazia\n");
					             break;
		case FALTOU_MEMORIA    : printf("Faltou memoria\n");
					             break;
		case CODIGO_INEXISTENTE: printf("Codigo inexistente\n");
					             break;
	}
	
}

/*----------------------
*/
int main() {
	ListaSE lista;
	Dado dado;
	int cod,codcon,erro;
	
	criaLista(&lista);
	do {
		printf("0-Fim\n");
		printf("1-Inclui no inicio\n");
		printf("2-Exibe lista\n");		
		printf("3-Quantidade de nodos\n");
		printf("4-Exibe situacao da lista\n");
		printf("5-Exclui do inicio\n");
		printf("6-Inclui no fim\n");
		printf("7-Exclui do fim\n");
		printf("8-Verifica existencia\n");	
		printf("9-Consulta por codigo\n");	
		printf("10-Inclui depois\n");
		printf("11-Exclui nodo\n");
		scanf("%d",&cod);
		
		switch (cod)
		{
			case 1: 
				printf("Informe o codigo:");
				scanf("%d",&dado.cod);
				printf("Informe o peso:");
				scanf("%f",&dado.peso);
				erro = incluiNoInicio(&lista,dado);
				exibeErro(erro); 			
				break;
			case 2:
				exibe(lista);
				break;
			case 3: 
				printf("Quantidade de Nodos: %d\n",quantidadeDeNodos(lista));
				break;
			case 4: 
				erro = estaVazia(lista);
				if (erro == 1)
					printf("Lista esta vazia.\n");
				else
					printf("Lista nao esta vazia.\n");
				break;
			case 5: 
				erro = excluiDoInicio(&lista,&dado);
				if (erro == 0)
					printf("Dado excluido:%d %f\n",dado.cod,dado.peso);
				else
					exibeErro(erro);
				break;
			case 6: 
				printf("Informe o codigo:");
				scanf("%d",&dado.cod);
				printf("Informe o peso:");
				scanf("%f",&dado.peso);
				erro = incluiNoFim(&lista,dado);
				exibeErro(erro); 
				break;
			case 7:
				erro = excluiDoFim(&lista,&dado);
				exibeErro(erro);
				if(erro == 0)
				printf("Dado excluido:%d %f\n",dado.cod,dado.peso);
				break;
			case 8: 
				printf("Informe o codigo:");
				scanf("%d",&codcon);
				erro = existe(lista,codcon);
				if (erro == 1)
					printf("O Codigo existe.\n");
				else
					printf("Codigo nao encontrado.\n");
				break;
			case 9: 
				printf("Informe o codigo:");
				scanf("%d",&dado.cod);
				erro = consultaPorCodigo(lista,dado.cod,&dado);
				if (erro == 0)
					printf("Dado encontrado: %d %f\n",dado.cod,dado.peso);
				else
					printf("Dado nao encontrado.\n");
				break;
			case 10: 
				printf("vai ser incluido depois de quem:");
				scanf("%d",&codcon);
				printf("Informe o codigo:");
				scanf("%d",&dado.cod);
				printf("Informe o peso:");
				scanf("%f",&dado.peso);
				erro = incluiDepois(&lista,codcon,dado);
				exibeErro(erro);
				break;
			case 11: 
				printf("Informe o codigo:");
				scanf("%d",&codcon);
				erro = excluiNodo(&lista,codcon,&dado);
				exibeErro(erro);
				printf("Dado excluido: %d %f\n",dado.cod,dado.peso);
				break;
			case 12: 
				break;			
			case 13: 
				break;
			case 14: 
				break;			
		}
		if (cod != 2)
			raioX(lista);

	} while (cod !=0);

	return 0;
}
