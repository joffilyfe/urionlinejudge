#include <stdio.h>

int main(void) {

	int vetor[20], troca[20], i = 0, j = 0;

	for (i = 0; i < 20; i++) {
		scanf("%d", &vetor[i]);
	}

	for (i = 0, j = 19; i < 20; i++, j--) {
		troca[j] = vetor[i];
	}

	for (i = 0; i < 20; i++) {
		printf("N[%d] = %d\n", i, troca[i] );
	}

	return 0;
}