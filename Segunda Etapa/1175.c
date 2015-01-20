#include <stdio.h>

int main(void) {

	int vetor[20], i, j, aux, entrada;

	for (i = 0; i < 20; i++) {
		scanf("%d", &entrada);
		vetor[i] = entrada;
	}

	for (i = 0, j = 20 - 1; i < 20/2; i++, j--) {
		aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
	}

	for (i = 0; i < 20; i++) {
		printf("N[%d] = %d\n", i, vetor[i]);
	}

	return 0;
}