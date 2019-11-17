#include <stdio.h>

main()
{
	int i, a, b, s;
	
	scanf("%d",&s);
	while(s == 1 || s == 2)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		if (s == 1)
		{
			if (a > b)
			{
				for (i = b; i <= a-1; i++)
				{
					printf("%d ",i);
				}
				printf("%d\n",i);
			} else
			{
				for (i = a; i <= b-1; i++)
				{
					printf("%d ",i);
				}
				printf("%d\n",i);
			}
		} else
		{
			if (a > b)
			{
				for (i = a; i >= b+1; i--)
				{
					printf("%d ",i);
				}
				printf("%d\n",i);
			} else
			{
				for (i = b; i >= a+1; i--)
				{
					printf("%d ",i);
				}
				printf("%d\n",i);
			}			
		}
		scanf("%d",&s);
	}
}
