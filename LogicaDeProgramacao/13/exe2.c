#include <stdio.h>

main()
{
	int m[3][5], n[3][5], s[3][5], d[3][5], i, j;

	for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
	for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            s[i][j] = m[i][j]+n[i][j];
            printf("%d ",s[i][j]);
        }
        printf("\n");
    }
    printf("\n");
	for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            d[i][j] = m[i][j]-n[i][j];
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
}
