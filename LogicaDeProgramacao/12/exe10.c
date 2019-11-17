#include <stdio.h>

main()
{
	int sel, v[9], i, me1, me2, min, max, c = 0, c2 = 0;
	
	scanf("%d",&sel);
	while (sel > 0 && c < 9)
	{
		v[c] = sel;
		c++;
		scanf("%d",&sel);
	} 
	c--;
	do
	{
		scanf("%d",&me1);
	} while (me1 < 0 || me1 > c);
	do
	{
		scanf("%d",&me2);
	} while (me2 < 0 || me2 > c);
	if (me1 > me2)
	{
		min = me2;
		max = me1;
	}
	else
	{
		min = me1;
		max = me2;
	}
	for (i = min; i <= max; i++)
	{
		if (v[i] > 4)
		c2++;
	}
	printf("%d",c2);
}
	
	
	
