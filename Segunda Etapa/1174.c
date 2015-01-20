#include <stdio.h>

int main(void) {

	int i;
	float vetor[100], entrada, aux;
	entrada = i = aux = 0;

	for (i = 0; i < 100; i++) {
		scanf("%f", &entrada);
		vetor[i] = entrada;
	}

	for (i = 0; i < 100; i++) {
		if (vetor[i] <= 10) {
			aux = vetor[i];
			if ((vetor[i] - (int)aux) == 0) {
				printf("A[%d] = %0.0f\n", i, vetor[i]);
			} else {
				printf("A[%d] = %0.1f\n", i, vetor[i]);
			}
		}
	}

	return 0;
}