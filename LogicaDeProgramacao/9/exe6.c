#include <stdio.h>

main()
{
	int apc, exc, alunos, i;
	float nota1, nota2, ap, rep, media, mediaap, per;
	ap = 0; apc = 0; rep = 0;
	
	printf("insira a quantidade de alunos:\n");
	scanf("%d",&alunos);
	printf("insira as notas dos alunos:\n");
	for (i = 1; i <= alunos; i++)
	{
		scanf("%f",&nota1);
		scanf("%f",&nota2);
		media = (nota1+nota2)/2;
		printf("nota final:%.1f\n",media);
		
		if(media >= 6)
		{
			ap = ap + media;
			apc++;
		} else {
			rep++;
		}
	} 
	mediaap = ap/apc;
	per = apc*100.0/(rep+apc);
	printf("Media dos Aprovados:%.1f\n",mediaap);
	printf("Percentual de Aprovados:%.1f%%\n",per);
}
