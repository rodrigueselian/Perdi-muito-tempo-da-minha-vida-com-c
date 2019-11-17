#include <stdio.h>

main()
{
	int hora1, hora2, i, c = 0;
	float temps[11], s = 0, m;
	
	temps[0] = 10.5;
	temps[1] = 11.6;
	temps[2] = 15.8;
	temps[3] = 17.0;
	temps[4] = 17.5;
	temps[5] = 18.0;
	temps[6] = 15.0;
	temps[7] = 15.2;
	temps[8] = 15.7;
	temps[9] = 17.2;
	temps[10] = 17.5;
	temps[11] = 20.0;
	
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
