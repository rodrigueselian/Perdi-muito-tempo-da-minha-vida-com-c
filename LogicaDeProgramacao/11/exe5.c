#include <stdio.h>

main()
{
	int i, entry, f;
	float s, con, baixo;
	con = 4; f = 1;

	s = 0;
	baixo = 1;
	do
	{
		if (f == 1)
		{
			s = s + con/baixo;
			f = 0;						
		} else {
			s = s - con/baixo;
			f = 1;
		}
		baixo += 2;
	} while (con/baixo > 0.00001);
	printf("%f\n",s);
}
