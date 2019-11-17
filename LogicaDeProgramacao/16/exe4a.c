#include <stdio.h>

void exibePI (int n);

main()
{
	int i;
	scanf("%d",&i);
	exibePI(i);	
}

void exibePI (int n)
{
	int i, f = 0;
	float cim = 2, bai = 3, r;
	r = 2*2;
	for (i = 3; i <= n; i++)
	{
		if (f == 1)
		cim += 2;
		if (f == 2)
		{
			bai +=2;
			f = 0;
		}
		r = r*cim/bai;
		f++;
	}
	if (n == 1)
	r = cim;
	printf("%f\n",r);
}
