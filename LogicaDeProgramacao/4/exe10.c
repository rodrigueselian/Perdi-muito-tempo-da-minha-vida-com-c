#include <stdio.h>

main()
{
	int cor, pou, cor2, pou2;
	printf("insira o seu saldo da conta corrente e da poupanca:\n");
	scanf("%i%i",&cor,&pou);
	
	if (cor < 1000 && pou < 1000){
		printf("SEM CONTA ESPECIAL");
	} else {
		if (cor > pou){
			cor2 = cor*2;
			pou2 = pou*3;
			if (pou2 > cor2)
				printf("CONTA ESPECIAL DE:%i",pou2);
			else
				printf("CONTA ESPECIAL DE %i",cor2);
		} else {
			pou2 = pou*2;
			cor2 = cor*3;
		if (pou2 > cor2)
			printf("CONTA ESPECIAL DE:%i",pou2);
		else
			printf("CONTA ESPECIAL DE %i",cor2);
		}
	}
}
