#include <stdio.h>

void retTracos (void);
void exibeOnzeTracos (void);

main()
{
	retTracos();
	printf("\n");
	retTracos();
}

void exibeOnzeTracos (void)
{
	int i;
	for (i = 0; i < 11; i++)
	   printf("-");
}

void retTracos (void)
{
	int i;
	for (i = 0; i < 3; i++)
	    {
		exibeOnzeTracos();
		printf("\n");
	    }
}
