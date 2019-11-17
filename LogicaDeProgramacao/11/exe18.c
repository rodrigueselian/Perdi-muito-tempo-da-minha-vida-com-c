#include <stdio.h>

main()
{
	int nint, mete, metd, dobro, i;
	
	for (i = 1000; i <= 9999; i++)
	{
		mete = i/100;
		metd = i%100;
		nint = metd + mete;
		dobro = nint*nint;
		if (dobro == i)
		printf("%d ",dobro);
	}
	
	
}
