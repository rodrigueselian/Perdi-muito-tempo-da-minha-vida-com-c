#include <stdio.h>
#include <stdlib.h>

main()
{
	float ele, bra, nul, val, perbra, pernul, perval;
	
	printf("insira o numero de eleitores:");
	scanf("%f",&ele);
	printf("insira o numero de votos em branco:");
	scanf("%f",&bra);
	printf("insira o numero de votos nulos:");
	scanf("%f",&nul);
	printf("insira o numero de votos validos:");
	scanf("%f",&val);
	
	perbra = bra*100/ele;
	pernul = nul*100/ele;
	perval = val*100/ele;
	
	printf("o percentual de votos em branco e:%f\n", perbra);
	printf("o percentual de votos nulos e:%f\n", pernul);
	printf("o percentual de votos balidos e:%f\n", perval);
	system("pause");
}
