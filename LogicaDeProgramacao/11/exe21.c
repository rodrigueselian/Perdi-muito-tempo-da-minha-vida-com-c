#include <stdio.h>

main()
{
	int fam, fil, id, sx, cid, i, i2, rec, sx2;
	float media, lockchin, somachin;
	lockchin = 0; somachin = 0; cid = 0;
	
	printf("insira a quantidade de familias:\n");
	scanf("%d",&fam);
	
	for (i = 1; i <= fam; i++)
	{
		rec = 0;
		printf("insira a quantidade de filhos:\n");
		scanf("%d",&fil);
		for (i2 = 1; i2 <= fil; i2++)
		{
			printf("insira a idade e o sexo(1.homem 2.mulher):\n");
			scanf("%d%d",&id,&sx);
			if (id > rec)
			{
				rec = id;
				sx2 = sx;
			}
			if (sx == 1 && id > 18)
			{
				lockchin++;
				somachin = somachin + id;
			}
		}
		if (rec > 18)
		cid++;
		if (sx2 == 1)
		printf("Masculino\n");
		else
		printf("Feminino\n");
	}
	media = somachin/lockchin;
	printf("Familias com filho maior de idade:%d\n",cid);
	printf("media de idade dos homens m. de idade:%f",media);
}
