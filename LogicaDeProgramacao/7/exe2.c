#include <stdio.h>

main()
{
	double n1, n2, m;
	int n, a, e, r;
	
	a = 0;
	e = 0;
	r = 0;
	
	do
	{
		printf("Insira as notas\n");
		scanf("%lf%lf", &n1, &n2);
	    m = (n1+n2)/2;
	    if (m >= 6){
			a++;
		} else if (m >= 3) {	
			e++;
		} else {
			r++;
		}
	    printf("media = %.1lf\n",m);
	    printf("Calcular a média de outro aluno 1.Sim 2.Nao?");
	    scanf ("%i",&n);
	}
	while (n == 1);
	
	printf("numero de alunos aprovados = %i\n",a);
	printf("numero de alunos em exame = %i\n",e);
	printf("numero de alunos reprovados = %i\n",r);
}
