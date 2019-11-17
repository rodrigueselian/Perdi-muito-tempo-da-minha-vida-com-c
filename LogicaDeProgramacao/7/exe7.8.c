#include <stdio.h>

main()
{
	int time, id, contid, cbr, cpel, cfar;
	float total, br, pel, far;
	contid = 0; cbr = 0; cpel = 0; cfar = 0;

	printf("insira o time (1.brasil 2.pelotas 3.farroupilha) e sua idade\n");
	scanf("%i",&time);
	while (time > 0 && time < 4)
	{
		scanf("%i",&id);
		if (time == 1 && id > 14 && id < 21)
		{
			contid++;
		}
		if (time == 1)
		{
			cbr++;
		} 
		else if (time == 2)
		{
			cpel++;
		} 
		else if (time == 3)
		{
			cfar++;
		}
		printf("insira o time (1.brasil 2.pelotas 3.farroupilha) e sua idade\n");
		scanf("%i",&time);
	}	
	
	total = cbr + cpel + cfar;
	br = cbr * 100.0 / total;
	pel = cpel * 100.0 / total;
	far = cfar * 100.0 / total;
	printf("Brasil: %.1f%%\n",br);
	printf("Pelotas: %.1f%%\n",pel);
	printf("Farroupilha: %.1f%%\n",far);
	printf("%i\n",contid);
}
