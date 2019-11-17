#include <stdio.h>

main()
{
	int sel, c = 0, v[9], min, max, i, rmin, rmax;
	
	do
	{
		scanf("%d",&sel);
		v[c] = sel;
		c++;			
	} while (sel > 0 && c < 10);
	scanf("%d%d",&min,&max);
	rmin = v[min];
	rmax = v[max];
	for (i = min; i <= max; i++)
	{
		if (v[i] > rmax)
		{
			rmax = v[i];
		}
		else if (v[i] < rmin)
		{
			rmin = v[i];
		}
	}
	printf("%d %d",rmax,rmin);
}
