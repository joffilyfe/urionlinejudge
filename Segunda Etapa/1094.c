#include <stdio.h>
#include <string.h>

int main(void) {
	int quantidadeCobaias[3]; //0 = c R = 1 S = 2
	int quantidadeTotal = 0, entrada = 0, i, cobaiaEntrada = 0;
	char tipoCobaia;
	quantidadeCobaias[0] = quantidadeCobaias[1] = quantidadeCobaias[2] = 0;

	scanf("%d", &entrada);

	for(i = 0; i < entrada; i++) {
		scanf("%d %c", &cobaiaEntrada, &tipoCobaia);


		if(tipoCobaia == 'C') {
			quantidadeCobaias[0] += cobaiaEntrada;
			quantidadeTotal += cobaiaEntrada;
		} else if (tipoCobaia == 'R') {
			quantidadeCobaias[1] += cobaiaEntrada;
			quantidadeTotal += cobaiaEntrada;
		} else if (tipoCobaia == 'S') {
			quantidadeCobaias[2] += cobaiaEntrada;
			quantidadeTotal += cobaiaEntrada;
		}

		getchar();
	}

	printf("Total: %d cobaias\n", quantidadeTotal);
	printf("Total de coelhos: %d\n", quantidadeCobaias[0]);
	printf("Total de ratos: %d\n", quantidadeCobaias[1]);
	printf("Total de sapos: %d\n", quantidadeCobaias[2]);

	printf("Percentual de coelhos: %0.2f %%\n", ((float)quantidadeCobaias[0]/quantidadeTotal) * 100);
	printf("Percentual de ratos: %0.2f %%\n", ((float)quantidadeCobaias[1]/quantidadeTotal) * 100);
	printf("Percentual de sapos: %0.2f %%\n", ((float)quantidadeCobaias[2]/quantidadeTotal) * 100);

}