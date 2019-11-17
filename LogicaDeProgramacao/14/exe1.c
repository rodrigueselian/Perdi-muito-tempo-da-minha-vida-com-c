#include <stdio.h>

main()
{
	int i;
	char x;
	for (i = 0; i < 5; i++)
	{
		scanf("\n%c",&x);
		if (x >= 65 && x <= 90)
		printf("sim\n");
		else
		printf("nao\n");
	}
}
