#include <stdio.h>
#include <math.h>

void exibePI (float x, int n);

main()
{
	int n, g;
	
	scanf("%d",&n);
	while (n > 0)
	{
		scanf("%d",&g);
		exibePI(n,g);	
		scanf("%d",&n);
	}
}

void exibePI (float x, int n)
{
	int i;
	float pix = 1, r;

	for (i = 2; i <= n; i++)
	{
		r = r * (1.0- (x*x)/(i*i)*(3.14*3.14));
	}
	printf("%f\n",r);
	
	r = r * (1.0- pow(x,2)/pow(i,2)*pow(3.14,2));
	
}
