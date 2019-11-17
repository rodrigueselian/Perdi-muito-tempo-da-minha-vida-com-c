#include <stdio.h>

main()
{
	int m[4][4], r=0, c=3, i, j;

	for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    for (i = 2; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            r = r+m[i][j];
        }
    }
    printf("%d linha 2\n",r);
    r = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 1; j < 2 ;j++)
        {
            r = r+m[i][j];
        }
    }
    printf("%d coluna 1\n",r);
    r = 0;
    for (i = 0; i < 4; i++)
        r = r+m[i][i];
    printf("%d diagonal principal\n",r);
    r = 0;
    for (i = 0; i < 4; i++)
    {
        r = r+m[i+0][3-i];
    }
    printf("%d diagonal secundaria\n",r);
    r = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            r = r+m[i][j];
        }
    }
    printf("%d toda matriz\n",r);
}
