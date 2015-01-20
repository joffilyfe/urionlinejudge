#include <stdio.h>


int main(void) {

	float vetor[100];
	int i = 0;

	for (i = 0; i < 100; i++) {
		scanf("%f", &vetor[i]);
	}

	for (i = 0; i < 100; i++) {

		if(vetor[i] <= 10) {
			
			if ( (vetor[i] - (int)vetor[i]) == 0) {
				printf("A[%d] = %.0f\n", i, vetor[i]);
			} else {
				printf("A[%d] = %.1f\n", i, vetor[i]);
			}
		}
	}

	return 0;
}