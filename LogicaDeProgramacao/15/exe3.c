#include <stdio.h>

void exibeOnzeTracos (void);
void paralelogramoTracos(void);

main()
{
	paralelogramoTracos();
	printf("\n");
	paralelogramoTracos();
}

void exibeOnzeTracos (void)
{
	int i;
	for (i = 0; i < 11; i++)
	printf("-");
}

void paralelogramoTracos (void)
{
	int i, j;
	for (i = 0; i < 3; i++)
    	{
		exibeOnzeTracos();
		printf("\n");
		for (j = 0; j < i+1; j++)
		    printf(" ");
    	}
}
