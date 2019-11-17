#include <stdio.h>

main()
{
	char a, b, ma, me, code;
	
	do
	scanf("\n%c",&code);
	while(code != 'C' && code && 'D' && code != 'F');
	while (code != 'F')
	{
		scanf("\n%c\n%c",&a,&b);
		if (a > b)
		{
			ma = a; me = b;
		}
		else
		{
			ma = b; me = a;
		}
		if (code == 'C')
		printf("%c %c\n",me,ma);
		else
		printf("%c %c\n",ma,me);
		do
		scanf("\n%c",&code);
		while(code != 'C' && code != 'D' && code != 'F');
	}
}
