#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q, b[10], x, p, i, temp;

    scanf("%d",&q);
    for (i = 0; i < q; i++)
    {
        scanf("%d",&b[i]);
    }
    scanf("%d",&x);
    do
    {
        scanf("%d",&p);
    } while (p < 0 || p >= q);

    for (i = q+1; i > p; i--)
    {
        b[i] = b[i-1];
    }
    b[p] = x;
    for (i = 0; i < q+1; i++)
        printf("%d ",b[i]);
    return 0;
}
