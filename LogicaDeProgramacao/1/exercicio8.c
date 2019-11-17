#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main()
{
	float tc,td,rep,apr,per,per2,wtf,final;
	
	tc = 60;
	td = 20;
	
	printf("Percentual de alunos reprovados na turma C:");
	scanf("%f",&per);
	printf("Percentual de alunos aprovados na turma D:");
	scanf("%f",&per2);
	
    rep = ((per/100)*tc);
    apr = (20-((per2/100)*td));
    final = (((rep+apr)*100)/80);
	
	printf("alunos reprovados na turma c:%f\n",rep);
	printf("alunos reprovados na turma d:%f\n",apr);
	printf("percentual de alunos reprovados nas duas turmas:%f\n",final);
	system("pause");
}
