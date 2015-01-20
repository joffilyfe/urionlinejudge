#include <stdio.h>

int main(void) {
	int i, entrada, dobro, vetor[10];
	i = entrada = dobro = 0;

	scanf("%d", &entrada);
	for (i = 0; i < 10; i++) {
		if (i == 0) {
			vetor[i] = entrada;
		} else {
			entrada *= 2;
			vetor[i] = entrada;
		}
	}

	for (i = 0; i < 10; i++) {
		printf("N[%d] = %d\n", i, vetor[i]);
	}

	return 0;
}