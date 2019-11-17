#include <stdio.h>

main()
{
	float nota, ap, apc, ex, exc, mediaap, mediaex;
	ap = 0; apc = 0; ex = 0; exc = 0;
	
	printf("insira as notas\n");
	scanf("%f",&nota);
	do
	{
		if (nota >= 6)
		{
			ap = ap + nota;
			apc++;
		} else if (nota >= 3) {
			ex = ex + nota;
			exc++;
		}
		scanf("%f",&nota);
	} while (nota != 99);
	mediaap = ap/apc;
	mediaex = ex/exc;
	printf("Media dos Aprovados:%.1f\n",mediaap);
	printf("Media em Exame:%.1f\n",mediaex);
}
