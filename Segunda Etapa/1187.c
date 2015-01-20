#include <stdio.h>

int main(void) {

	int i, j, linha, diagonal = 1, tam = 0;
	double entrada, sum;
	char operacao;

	scanf("%c", &operacao);
	getchar();

	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			scanf("%lf", &entrada);
			if ( j >= diagonal && j <= 11 - diagonal) {
				sum += entrada;
				tam++;
			}
		}

		diagonal++;
	}

	if (operacao == 'S') {
		printf("%0.1f\n", sum);
	} else {
		printf("%0.1f\n", sum / tam);
	}

	return 0;
}