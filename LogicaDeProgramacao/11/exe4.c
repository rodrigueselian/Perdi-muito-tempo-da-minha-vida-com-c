#include <stdio.h>

main()
{
	int i, entry;
	float s, con, baixo;
	con = 4; csin = 2;

	scanf("%d",&entry);
	while (entry > 0)
	{
		s = 0;
		baixo = 1;
		for (i = 1; i <= entry; i++)
		{
			if (i%2 == 1)
			{
				s = s + con/baixo;						
			} else {
				s = s - con/baixo;
			}
			baixo += 2;
		}
		printf("%f\n",s);
		scanf("%d",&entry);
	}
}
