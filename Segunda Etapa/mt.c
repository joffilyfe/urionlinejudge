#include <stdio.h>

int main(void) {

	int vetor[4][4], i, j;

	for (i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			vetor[i][j] = i + j + 1;
		}
	}

	for (i = 0; i < 4; i++) {
		for(j = 0; j < 4; j++) {
			printf("%d ", vetor[i][j]);
		}
		printf("\n");
	}

	
	return 0;
}