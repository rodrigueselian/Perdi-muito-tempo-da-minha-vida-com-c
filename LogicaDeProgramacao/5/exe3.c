#include <stdio.h>

main()
{
	double a, b, r;
	
	printf("insira as duas notas:\n");
	scanf("%lf",&a);
	
	while (a >= 0)
	{
		scanf("%lf",&b);	
		r = (a+b)/2;
		printf("Media = %.1lf\n",r);
		printf("insira as duas notas:\n");
		scanf("%lf",&a);
	}
}
