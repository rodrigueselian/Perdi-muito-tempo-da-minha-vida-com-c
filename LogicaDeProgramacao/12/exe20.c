#include <stdio.h>

main()
{
	int cod[5], qt[5], op, cods, q, i, f=0;
	float rs[5];

	for (i = 0; i < 5; i++)
	{
        printf("Insira o codigo, preco e quantidade do produto\n");
        scanf("%d%f%d",&cod[i],&rs[i],&qt[i]);
	}
	printf("insira a op. (1.venda 2.reposicao 3.inventario 4.fim)\n");
    scanf("%d",&op);
    while (op != 4)
    {
        f = 0;
        switch (op)
        {
        case 1:
            printf("insira o codigo do produto:");
            scanf("%d",&cods);
            for (i = 0; i < 5; i++)
            {
                if (cods == cod[i])
                {
                    f = 1;
                    break;
                }
            }
            if (f == 0)
            {
                printf("codigo invalido\n");
                break;
            }
            printf("insira a quantidade:");
            scanf("%d",&q);
            qt[i] -= q;
            printf("%.2f (valor da venda)\n",rs[i]*q);
            break;

        case 2:
            printf("insira o codigo do produto:");
            scanf("%d",&cods);
            for (i = 0; i < 5; i++)
            {
                if (cods == cod[i])
                {
                    f = 1;
                    break;
                }
            }
            if (f == 0)
            {
                printf("codigo invalido\n");
                break;
            }
            printf("insira a quantidade:");
            scanf("%d",&q);
            qt[i] += q;
            printf("+%d adicionado ao produto ""%d""\n",q,cod[i]);
            break;

        case 3:
            printf("INVENTARIO:\n");
            for (i = 0; i < 5; i++)
            {
                printf("%d %.2f %d ",cod[i], rs[i], qt[i]);
                if (qt[i] > 0)
                printf("%.2f",qt[i]*rs[i]);
                printf("\n");
            }
            break;
        }
    printf("\ninsira a op. (1.venda 2.reposicao 3.inventario 4.fim)\n");
    scanf("%d",&op);
    }
}
