#include <stdio.h>
#include <stdlib.h>

int main()
{
	int r[10], n[4] = {10,15,17,21}, m[6] = {7,12,18,22,40,50};
	int temp, i, j;

	for (i = 0; i < 4;i++)
	{
	    r[i] = n[i];
	}
	for (i = 4; i < 10;i++)
    {
        r[i] = m[i-4];
    }
    for(i = 0; i < 10; i++)
    {
        for(j = i+1; j < 10; j++)
        {
            if(r[i] > r[j])
            {
                temp = r[j];
                r[j] = r[i];
                r[i] = temp;
            }
        }
    }
    for (i = 0; i < 10;i++)
    {
        printf("%d ",r[i]);
    }
    return 0;
}
