#include <stdio.h>

typedef struct {
	int hora, min, seg;
} Horario;

main()
{
	Horario hora1, hora2;
	int i, soma1 = 0, soma2 = 0;

	scanf("%d %d %d",&hora1.hora, &hora1.min, &hora1.seg);
	scanf("%d %d %d",&hora2.hora, &hora2.min, &hora2.seg);
	
	soma1 = hora1.hora*60*60 + hora1.min*60 + hora1.seg;
	soma2 =	hora2.hora*60*60 + hora2.min*60 + hora2.seg;
	
	if (soma1 < soma2)
	{
		printf("%d %d %d\n",hora1.hora, hora1.min, hora1.seg);
	}
	else if (soma1 > soma2)
	{
		printf("%d %d %d\n",hora2.hora, hora2.min, hora2.seg);
	}
	else
	{
		printf("horarios iguais\n");
	}
	
}
