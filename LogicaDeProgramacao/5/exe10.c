#include <stdio.h>

main()
{
	double n1, n2, m, x;
	do
	{
		printf("insira as notas:\n");
		scanf("%lf",&n1);
		while (n1 < 0 || n1 >10)
		{
			printf("nota invalida\n");
			scanf("%lf",&n1);
		}
		scanf("%lf",&n2);
		while (n2 < 0 || n2 > 10)
		{
			printf("nota invalida\n");
			scanf("%lf",&n1);
		}
		m = (n1+n2)/2;
		printf("Media = %.1lf\n",m);
		printf("novo calculo? (1.sim 2.nao)\n");
		scanf("%lf",&x);
		while ((x != 2) && (x != 1))
		{
			printf("novo calculo? (1.sim 2.nao)\n");
			scanf("%lf",&x);
		}
	}
	while (x == 1);
	return 0;
}
