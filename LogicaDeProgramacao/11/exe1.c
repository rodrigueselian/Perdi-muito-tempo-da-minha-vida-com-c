#include <stdio.h>

main()
{
	float s, i, i2;
	s = 0;
	i2 = 1;
	
	for (i = 1; i <= 99; i+=2)
	{
		s = s + i/i2;
		i2++;
	}
	printf("%f",s);
}
