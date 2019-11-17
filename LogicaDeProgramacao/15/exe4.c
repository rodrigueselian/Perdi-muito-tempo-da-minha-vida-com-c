#include <stdio.h>

void exibeAlfabeto (void);
void exibeDigitos (void);
void exibeCardapio (void);

main()
{
	int sel;
	exibeCardapio();
	scanf("%d",&sel);
	while (sel != 3)
	{
		if (sel == 1)
		    exibeAlfabeto();
		else
		    exibeDigitos();
		printf("\n");
		scanf("%d",&sel);
	}
}

void exibeAlfabeto (void)
{
	int i;
	char x;
	for (i = 'A'; i <= 'Z'; i++)
	    printf("%c ",i);
}

void exibeDigitos (void)
{
	int i;
	for (i = 0; i < 10; i++)
	    printf("%d ",i);
}

void exibeCardapio (void)
{
	printf("1.Alfabeto\n2.Digitos\n3.Fim\n");
}
