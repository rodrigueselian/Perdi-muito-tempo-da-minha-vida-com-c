#include <stdio.h>

main()
{
	int i;
	float s, sin, i2;
	s = 0;
	i2 = 1;
	
	for (i = 1; i <= 10; i++)
	{
		sin = i%2;
		if (sin == 1)
		{
			i2 = i*i;
			s = s + i/i2;						
		} else {
			i2 = i*i;
			s = s - i/i2;
		}
	}
	printf("%f",s);
}
