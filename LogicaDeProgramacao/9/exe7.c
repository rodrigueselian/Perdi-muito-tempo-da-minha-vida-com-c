#include <stdio.h>

main()
{
	int bt, e1, e2, e3, m;
	e1 = 0; e2 = 0; e3 = 0;
	
	do
	{
		scanf("%d",&bt);
		if (bt == 1)
		e1++;
		else if (bt == 2)
		e2++;
		else
		e3++;
	} while (bt == 1 || bt == 2 || bt == 3);
	
	if (e1 > e2 && e1 > e3)
	{
		m = 1;
	} else if (e2 > e1 && e2 > e3)
	{
		m = 2;
	} else {
		m = 3;
	}
	
	printf("Elevador %d",m);
}
