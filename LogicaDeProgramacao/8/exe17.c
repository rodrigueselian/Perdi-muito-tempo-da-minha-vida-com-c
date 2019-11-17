#include <stdio.h>

main()
{
	int i, a, c, cn, c2;
	c = 0; c2 = 1; cn = 0;
	
	do
	{
		c2++;
		scanf("%d",&a);
		if (a >= 100 && a <= 200 )
		c++;
		else
		cn++;
	} while (c2 <= 10);
	printf("%d (dentro do intervelo)\n",c);
	printf("%d (fora do intervalo)\n",cn);
}
