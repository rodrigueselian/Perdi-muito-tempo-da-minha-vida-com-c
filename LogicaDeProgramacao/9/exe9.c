#include <stdio.h>

main()
{
	float food, d, i;
		
	scanf("%f",&food);
	for (i = 1; food > 1; i++)
	{
		food = food/2.0;
		d = i;
	}
	printf("%.0f",d);
}

