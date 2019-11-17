#include <stdio.h>

main()
{
	int n1, i, m, f;
	f = -1;
	
	do
	{
		scanf("%d",&n1);
	} while (n1 < 1);
	
	for (i = 1; i <= n1; i++)
	{
		if (n1%i == 0)
		f++;
	}
	if (f != 1)
		printf("Nao e primo");
	else
		printf("e primo");
}
