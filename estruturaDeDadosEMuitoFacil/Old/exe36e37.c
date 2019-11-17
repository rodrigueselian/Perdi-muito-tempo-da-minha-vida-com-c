#include <stdio.h>

typedef struct {
	int camisa, gol
}jogador;

jogador leJogador (void);
void escreveJogador (jogador x);
int ehGoleador (jogador x);

main()
{
	int goleador;
	jogador fut;
	fut = leJogador();
	goleador = ehGoleador(fut);
	if (goleador == 1)
		printf("Eh goleador\n");
	escreveJogador(fut);
}

jogador leJogador (void)
{
	jogador fut;
	scanf("%d",&fut.camisa);
	scanf("%d",&fut.gol);
	return fut;
}

void escreveJogador (jogador x)
{
	printf("Camisa:%d\n",x.camisa);
	printf("Gols:%d",x.gol);
}

int ehGoleador (jogador x)
{
	if(x.gol > 5)
		return 1;
	else
		return 0;
}
