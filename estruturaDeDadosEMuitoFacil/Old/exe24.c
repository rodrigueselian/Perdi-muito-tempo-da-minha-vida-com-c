#include <stdio.h>

int calcDivisao (float a, float b, float *r);

main()
{
	int n, i, ret;
	float a, b, r;
	
	scanf("%d",&n);
	for (i = 0; i < n; i++)
	{
		scanf("%f%f",&a,&b);
		ret = calcDivisao(a,b,&r);
		if (ret == 1)
			printf("Divisao por zero\n");
		else
			printf("%.1f\n",r);
	}
}

int calcDivisao (float a, float b, float *r)
{
	if (b == 0)
		return 1;
	*r = a/b;
	return 0;
}
