#include <stdio.h>

int main(void) {

	int vetor[10], i, j, aux;

	for (i = 0; i < 10; i++) {
		vetor[i] = i;
	}

	for (i = 0, j = 9; i < 5; i++, j--) {
		aux = vetor[i];
		vetor[i] = vetor[j];
		vetor[j] = aux;
	}

	for (i = 0; i < 10; i++) {
		printf("%d ", vetor[i]);
	}
	
	printf("\n");

	return 0;
}