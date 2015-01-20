#include <stdio.h>

int main(void) {

	int i, j, linha;
	float entrada, sum;
	char operacao;


	scanf("%d", &linha);
	getchar();
	scanf("%c", &operacao);
	getchar();

	for (i = 0; i < 12; i++) {
		for (j = 0; j < 12; j++) {
			scanf("%f", &entrada);
			if (i == linha) {
				sum += entrada;
			}
		}
	}

	if (operacao == 'S') {
		printf("%0.1f\n", sum);
	} else {
		printf("%0.1f\n", sum / 12);
	}

	return 0;
}