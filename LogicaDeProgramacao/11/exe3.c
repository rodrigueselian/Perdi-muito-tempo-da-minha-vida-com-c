#include <stdio.h>

main()
{
	int i, entry;
	float s, sin, i2;

	scanf("%d",&entry);
	while (entry > 0)
	{
		i2 = 1000;
		s = 0;
		for (i = 1; i <= entry; i++)
		{
			sin = i%2;
			if (sin == 1)
			{
				s = s + i2/i;						
			} else {
				s = s - i2/i;
			}
			i2-=3;
		}
		printf("%f\n",s);
		scanf("%d",&entry);
	}
}
