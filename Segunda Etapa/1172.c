#include <stdio.h>

int main(void) {

	int vetor[10], i, entrada;
	i = entrada = 0;

	for (i = 0; i < 10;i++) {
		scanf("%d", &entrada);
		vetor[i] = entrada;
	}

	for (i = 0; i < 10; i++) {
		if (vetor[i] <= 0) {
			vetor[i] = 1;
		}
	}

	for (i = 0; i < 10; ++i) {
		printf("X[%d] = %d\n", i, vetor[i]);
	}

	return 0;
}