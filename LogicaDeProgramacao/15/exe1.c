#include <stdio.h>

void exibeOnzeTracos (void);
void espaco (void);

main()
{
	int val;
	scanf("%d",&val);
	
	espaco();
	printf("+");
	exibeOnzeTracos();
	printf("+");
	espaco();
	printf("\n");
	exibeOnzeTracos();
	if (val == 1)
	printf("|  XAVANTE  |");
	else if (val == 2)
	printf("|  PELOTAS  |");
	exibeOnzeTracos();
	printf("\n");
	espaco();
	printf("+");
	exibeOnzeTracos();
	printf("+");
}

void exibeOnzeTracos (void)
{
	int i;
	for (i = 0; i < 11; i++)
	printf("-");
}
void espaco (void)
{
	int i;
	for (i = 0; i < 11; i++)
	printf(" ");
}
