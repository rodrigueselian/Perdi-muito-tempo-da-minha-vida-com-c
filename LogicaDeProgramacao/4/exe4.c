#include <stdio.h>

main()
{
	float litro, comb, preco, total;
	
	printf("insira a quantidade de litros:");
	scanf("%f",&litro);
	printf("insira 1(gasolina) ou 2(alcool):");
	scanf("%f",&comb);
	printf("insira o preco por litro do combustivel:");
	scanf("%f",&preco);
	
	if (comb == 1){
		if (litro <= 20){
			total = litro*(preco-(preco*3/100));
		} else {
			total = litro*(preco-(preco*5/100));
		}
	} else {
		if (comb == 2 && litro <= 15){
			total = litro*(preco-(preco*3.5/100));
		} else {
			total = litro*(preco-(preco*6/100));
		}
	}
	printf("o total e de:%.2f",total);
}
