#include <stdio.h>

int main(void) {

	float entrada, notaUm, notaDois;
	int i, pergunta;
	i = pergunta = 0;
	do {
		pergunta = i = 0;
		do {
			scanf("%f", &entrada);
			if (entrada >= 0 && entrada <= 10 && i < 2) {
				if (i == 0) {
					notaUm = entrada;
					i++;
				} else {
					notaDois = entrada;
					i++;
				}
			} else {
				printf("nota invalida\n");
			}

		} while ( i < 2);

		printf("media = %0.2f\n", (notaUm + notaDois) / 2);
		while (printf("novo calculo (1-sim 2-nao)\n") && scanf("%d", &pergunta) && (pergunta != 1) && pergunta != 2);
	} while(pergunta == 1);

	return 0;
}