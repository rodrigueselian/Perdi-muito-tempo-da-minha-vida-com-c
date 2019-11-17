#include <stdio.h>

main()
{
	int h1, h2, m1, m2, novo, velho, nova, velha, soma, prod;
	
	printf("Insira a idade dos dois homens:\n");
	scanf("%i%i",&h1,&h2);
	printf("Insira a idade das duas mulheres:\n");
	scanf("%i%i",&m1,&m2);
	
	if (h1 > h2){
		velho = h1;
		novo = h2;
	} else {
		velho = h2;
		novo = h1;
	}
	if (m1 > m2){
		velha = m1;
		nova = m2;
	} else {
		velha = m2;
		nova = m1;
	}
	soma = velho+nova;
	prod = novo*velha;
	
	printf("a soma e:%i\n",soma);
	printf("e o produto e:%i",prod);
}
