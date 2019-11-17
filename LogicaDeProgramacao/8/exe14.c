#include <stdio.h>

main()
{
	int a, b, c;
	float i, pa, pb, pc, t;
	scanf("%d%d%d",&a,&b,&c);
	t = a+b+c;
	pa = a/t*100.0;
	pb = b/t*100.0;
	pc = c/t*100.0;
	for (i = 0; i <= pa; i+=5)
	printf("*");
	printf(" %.1f\n",pa);
	for (i = 0; i <= pb; i+=5)
	printf("*");
	printf(" %.1f\n",pb);
	for (i = 0; i <= pc; i+=5)
	printf("*");
	printf(" %.1f\n",pc);
}
