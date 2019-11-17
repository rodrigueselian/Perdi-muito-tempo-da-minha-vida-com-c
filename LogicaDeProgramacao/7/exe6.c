#include <stdio.h>

main()
{
	int x, alc, gas, die, fim;
	alc = 0; gas = 0; die = 0;
	do
	{
		printf("insira o tipo de combustivel:");
		scanf("%i",&x);
		if (x == 1){
			printf("alcool\n");			
			alc++;
			} else if (x == 2){
				printf("gasolina\n");
				gas++;
				} else if (x == 3){
					printf("diesel\n");
					die++;
					}
	}
	while (x != 4);
	printf("MUITO OBRIGADO\n");
	printf("quantidade de alcool:%i\n",alc);
	printf("quantidae de gasolina:%i\n",gas);
	printf("quantidade de diesel:%i\n",die);
}

