/*--------------------------------
* Arquivo: Exerc-9-2.c
*/
#include <stdio.h>
#include "pilhaenc.h"

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
		case PILHA_VAZIA       : printf("Pilha vazia\n");
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
	PilhaEnc pilha;
	Dado dado;
	int cod,codcon,erro;
	
	criaPilha(&pilha);
	do {
		printf("0-Fim\n");
		printf("1-Empilha\n");
		printf("2-Exibe\n");		
		printf("3-Desempilha\n");
		printf("4-Consulta\n");
		printf("5-Esta Vazia\n");
		scanf("%d",&cod);
		
		switch (cod)
		{
			case 1: 
				printf("Informe o codigo:");
				scanf("%d",&dado.cod);
				printf("Informe o peso:");
				scanf("%f",&dado.peso);
				erro = empilha(&pilha,dado);
				exibeErro(erro); 			
				break;
			case 2:
				exibe(pilha);
				break;
			case 3: 
				erro = desempilha(&pilha,&dado);
				exibeErro(erro);
				if (erro == 0)
					printf("Dado excluido: %d %f\n",dado.cod,dado.peso);
				break;
			case 4: 
				erro = consulta(pilha,&dado);
				exibeErro(erro);
				if(erro == 0)
					printf("Dado da consulta: %d %f\n",dado.cod,dado.peso);
				break;
			case 5: 
				erro = estaVazia(pilha);
				exibeErro(erro);
				if (erro == 0)
					printf("nao esta vazia\n");
				break;
		}
		if (cod != 2)
			exibe(pilha);
	} while (cod !=0);

	return 0;
}
