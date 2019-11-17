#include <stdio.h>

main()
{
	float a, val, i;
	a = 0;
	
	printf("insira os 10 valores:\n");
	for (i = 1; i <= 10; i++)
	{
		scanf("%f",&val);
		a = a + val;
	}
	val = a/10.0;
	printf("%.1f",val);
}
