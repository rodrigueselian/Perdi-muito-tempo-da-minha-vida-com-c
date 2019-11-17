#include <stdio.h>

main()
{
	int i, entry;
	float s, con, baixo;
	con = 4;

	scanf("%d",&entry);
	while (entry > 0)
	{
		s = 0;
		baixo = 1;
		for (i = 1; i <= entry; i+=2)
		{
			s = s + con/baixo;						
			s = s - con/(baixo*2-1);
			baixo += 2;
		}
		s = s + con/baixo;						
		printf("%f\n",s);
		scanf("%d",&entry);
	}
}
