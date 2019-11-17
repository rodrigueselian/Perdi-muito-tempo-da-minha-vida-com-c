#include <stdio.h>

main()
{
	int q, r, a[10], b[10], u[20], i, j, c, t, f=0;
	c=1;t=0;

	scanf("%d%d",&q,&r);

	for(i = 0; i < q; i++)
        scanf("%d",&a[i]);
    for(i = 0; i < r; i++)
        scanf("%d",&b[i]);

    for(i = 0; i < q; i++)
    {
        f=1;
        for(j = 0; j < t; j++)
        {
            if(a[i] == u[j])
                f=0;
        }
        if (f == 1)
        {
            u[t] = a[i];
            t++;
        }
    }

    c=1;
    for(i = 0; i < r; i++)
    {
        f=1;
        for(j = 0; j < t+c; j++)
        {
            if(b[i] == u[j])
                f=0;
        }
        if (f == 1)
        {
            u[t] = b[i];
            t++;
        }
        c++;
    }
    for (i = 0; i < t; i++)
        printf("%d ",u[i]);
}
