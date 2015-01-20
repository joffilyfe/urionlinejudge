#include <stdio.h>

int main(void) {

	int entrada, numero, i, j, sum;
	entrada = numero = i = j = sum = 0;

	scanf("%d", &entrada);

	for (i = 0; i < entrada; i++) {
		scanf("%d", &numero);
		for (j = 1; j < numero; j++) {
			if (numero % j == 0) {
				sum += j;
			}
		}

		if (sum == numero) {
			printf("%d eh perfeito\n", numero);
		} else {
			printf("%d nao eh perfeito\n", numero);
		}
		sum = 0;
	}
	return 0;
}