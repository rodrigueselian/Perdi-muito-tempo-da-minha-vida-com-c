#include <stdio.h>

main()
{
	int hora1, hora2, i, c = 0;
	float temps[11], s = 0, m;
	
	for (i = 0; i < 12; i++)
	{
		scanf("%f",&temps[i]);
	}
	scanf("%d%d",&hora1,&hora2);
	while (hora1 <= hora2)
	{
		c = 0; s = 0;
		for (i = hora1; i <= hora2; i++)
		{
			s = s + temps[i-1];
			c++;
		}
		m = s/c;
		printf("%f\n",m);
		scanf("%d%d",&hora1,&hora2);
	}
}
