/*--------------------------------
* Arquivo: Exerc-9-2.c
*/
#include <stdio.h>
#include "filaenc.h"

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
		case FILA_VAZIA       : printf("Fila vazia\n");
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
	FilaEnc fila;
	Dado dado;
	int cod,codcon,erro;
	
	criaFila(&fila);
	do {
		printf("0-Fim\n");
		printf("1-Insere\n");
		printf("2-Exibe\n");		
		printf("3-Retira\n");
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
				erro = insere(&fila,dado);
				exibeErro(erro); 			
				break;
			case 2:
				exibe(fila);
				break;
			case 3: 
				erro = retira(&fila,&dado);
				exibeErro(erro);
				if (erro == 0)
					printf("Dado excluido: %d %f\n",dado.cod,dado.peso);
				break;
			case 4: 
				erro = consulta(fila,&dado);
				exibeErro(erro);
				if(erro == 0)
					printf("Dado da consulta: %d %f\n",dado.cod,dado.peso);
				break;
			case 5: 
				erro = estaVazia(fila);
				exibeErro(erro);
				if (erro == 0)
					printf("nao esta vazia\n");
				break;
		}
		if (cod != 2)
			exibe(fila);
	} while (cod !=0);

	return 0;
}
