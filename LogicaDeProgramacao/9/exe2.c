#include <stdio.h>

main()
{
	float i, alu, nota, media, a;
	a = 0;
	
	printf("insira a quantidade de alunos:\n");
	scanf("%f",&alu);
	printf("insira as notas:\n");
	for (i = 1; i <= alu; i++)
	{
		scanf("%f",&nota);
		a = a + nota;
	}
	media = a/alu;
	printf("Media = %.1f",media);
}
