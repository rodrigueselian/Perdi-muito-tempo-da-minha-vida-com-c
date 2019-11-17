#include <stdio.h>

typedef struct {
	int camisa, gol;
}jogador;

typedef struct {
	int ano;
	jogador jogador[5];
}equipe;

jogador leJogador (void);
void escreveJogador (jogador x);
int ehGoleador (jogador x);
void leEquipe (equipe *equipe);
void marcouGol (int camiseta, equipe *equipe);
jogador obtemGoleador(equipe *equipe);

main()
{
	int camiseta;
	equipe equipe;
	jogador goleador;
	leEquipe(&equipe);
	printf("quem marcou o gol?\n");
	scanf("%d",&camiseta);
	while (camiseta != 99)
	{
		printf("quem marcou o gol?\n");
		marcouGol(camiseta, &equipe);
		scanf("%d",&camiseta);
	}
	printf("o nosso goleador eh:\n");
	goleador = obtemGoleador(&equipe);
	escreveJogador(goleador);
}

void leEquipe (equipe *equipe)
{
	int i;
	printf("insira o ano: ");
	scanf("%d",&equipe->ano);
	for (i = 0; i < 5; i++)
	{
		equipe->jogador[i] = leJogador();
	}
}

void marcouGol (int camiseta, equipe *equipe)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		if (equipe->jogador[i].camisa == camiseta)
		{
			equipe->jogador[i].gol = equipe->jogador[i].gol + 1;
		}
	}
}

jogador obtemGoleador(equipe *equipe)
{
	int i;
	jogador maior;
	maior = equipe->jogador[0];
	for (i = 0; i < 5; i++)
	{
		if(equipe->jogador[i].gol > maior.gol)
		{
			maior = equipe->jogador[i];
		}
	}
	return maior;
}

jogador leJogador (void)
{
	jogador fut;
	printf("insira a camisa: ");
	scanf("%d",&fut.camisa);
	printf("insira o numero de gols: ");
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
