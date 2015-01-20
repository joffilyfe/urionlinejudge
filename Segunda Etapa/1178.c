#include <stdio.h>

int main(void) {

	int i;
	double vetor[100], entrada;

	scanf("%lf", &entrada);

	for (i = 0; i < 100; i++) {
		if (i == 0) {
			vetor[i] = entrada;
		} else {
			entrada = entrada / 2;
			vetor[i] = entrada;
		}
		printf("N[%d] = %.4f\n", i, vetor[i]);
	}

	return 0;
}