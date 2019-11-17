#include <stdio.h>

main()
{
	int idade, midade, imn;
	float nota, mnota, namv;
	midade = 0; mnota = 0;
	
	scanf("%d",&idade);
	while (idade > 0)
	{
		scanf("%f",&nota);
		if (idade > midade)
		{
			midade = idade;
			namv = nota;
		}
		if (nota > mnota)
		{
			mnota = nota;
			imn = idade;
		}
		scanf("%d",&idade);
	}
	printf("idade do aluno com maior nota:%d\n",imn);
	printf("nota do aluno mais velho:%.1f\n",namv);
}
	
