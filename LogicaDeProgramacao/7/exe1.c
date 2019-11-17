#include <stdio.h>

main()
{
	double n1, n2, m, x, n;
	x = 0;
	
	do
	{
		printf("Insira as notas\n");
		scanf("%lf%lf", &n1, &n2);
	    m = (n1+n2)/2;
	    if (m >= 6){
		x++;
		}
	    printf("media = %.1lf\n",m);
	    printf("Calcular a média de outro aluno 1.Sim 2.Não?");
	    scanf ("%lf",&n);
	}
	while (n == 1);
	
	printf("numero de alunos aprovados = %.0lf",x);
}
