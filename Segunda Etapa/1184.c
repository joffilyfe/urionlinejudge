#include <stdio.h>

int main(void) {

	int i, j, linha, diagonal, tam = 0;;
	float entrada, sum;
	char operacao;

	scanf("%c", &operacao);
	getchar();

	for (i = 0, diagonal = 0; i < 12; i++, diagonal++) {
		for (j = 0; j < 12; j++) {
			scanf("%f", &entrada);
			if (j < diagonal) {
				sum += entrada;
				tam++;
			}
		}
	}

	if (operacao == 'S') {
		printf("%0.1f\n", sum);
	} else {
		printf("%0.1f\n", sum / tam);
	}

	return 0;
}