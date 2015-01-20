#include <stdio.h>

int main(void) {
	
	int vetor[10], i, conta = 0;

	scanf("%d", &vetor[0]);

	for (i = 1; i < 10; i++) {
		conta = vetor[i - 1] * 2;
		vetor[i] = conta;

	}

	for (i = 0; i < 10; i++){
		printf("N[%d] = %d\n", i, vetor[i]);
	}

	return 0;
}