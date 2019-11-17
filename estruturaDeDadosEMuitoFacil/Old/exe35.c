#include <stdio.h>

typedef struct {
	int dia, mes, ano;
}data;

typedef struct {
	int nmat;
	data data;
}Aluno;

main()
{
	Aluno alunos[5];
	data data, datas[5];
	int i, c = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d %d %d", &alunos[i].data.dia, &alunos[i].data.mes, &alunos[i].data.ano);
	}
	scanf("%d %d %d", &data.dia, &data.mes, &data.ano);
	for (i = 0; i < 5; i++)
	{
		if (alunos[i].data.mes == data.mes)
		{
			datas[c] = alunos[i].data;
			c++;
		}
	}
	for (i = 0; i < c; i++)
	{
		printf("%d %d %d\n", datas[i].dia, datas[i].mes, datas[i].ano);
	}
}
