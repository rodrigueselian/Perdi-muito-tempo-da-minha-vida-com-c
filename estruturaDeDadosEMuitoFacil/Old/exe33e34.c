#include <stdio.h>

typedef struct {
	int dia, mes, ano;
}data;

typedef struct {
	int nmat;
	data data;
}Aluno;

int verificaIdade (data hoje, Aluno aluno);

main()
{
	Aluno aluno;
	data hoje;
	int cod, dias, c=0;
	scanf("%d %d %d",&hoje.dia, &hoje.mes, &hoje.ano);
	scanf("%d",&aluno.data.dia);
	while (aluno.data.dia != 99)
	{
		scanf("%d %d",&aluno.data.mes, &aluno.data.ano);
		cod = verificaIdade(hoje, aluno);
		if (cod == 1)
			printf("o aluno é de maior\n");
		else
			printf("o aluno é de menor\n");
		scanf("%d",&aluno.data.dia);
	}
}

int verificaIdade (data hoje, Aluno aluno)
{
	int ad;
	ad = hoje.ano - aluno.data.ano - 18;
	if (hoje.ano - aluno.data.ano - 18 >= 0)
	{
		if(hoje.mes - aluno.data.mes + (ad*12) >= 0)
		{
			if(hoje.dia - aluno.data.dia + (ad*30) >= 0)
			{
				return 1;	
			}
			else
				return 0;
		}
		else
			return 0;
	} 
	else
		return 0;
}
