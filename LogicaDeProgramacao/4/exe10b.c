#include <stdio.h>

main()
{
	int cor, pou, a, x, af, xf;
	printf("insira o seu saldo da conta corrente e da poupanca:\n");
	scanf("%i%i",&cor,&pou);
	
	if (cor < 1000 && pou < 1000){
		printf("SEM CONTA ESPECIAL");
	} else {
		if (cor > pou){
			x = cor;
			a = pou;
		} else {
			x = pou;
			a = cor;
		}
		af = a*3;
		xf = x*2;
		if (af > xf)
			printf("CONTA ESPECIAL DE:%i",af);
		else
			printf("CONTA ESPECIAL DE:%i",xf);
	}
}
