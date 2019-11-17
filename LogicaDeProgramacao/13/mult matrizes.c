#include <stdio.h>

main()
{
	int m[3][3], n[3][3], r[3][3], i, j, x, aux=0;

	for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("insira o numero do elemento %d%d da matriz 1 ",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("insira o numero do elemento %d%d da matriz 2 ",i+1,j+1);
            scanf("%d",&n[i][j]);
        }
    }
    printf("\n");
	for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            r[i][j]=0;
            for (x = 0; x < 3; x++)
            {
                aux = aux+m[i][x]*n[x][j];
            }
            r[i][j] = aux;
            aux = 0;
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }
}
