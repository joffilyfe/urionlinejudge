#include <stdio.h>

int main(void) {

	int i, j, entrada;
	int vetor[1000];

	scanf("%d", &entrada);

	for (i = j = 0; i < 1000; i++) {

		if (j < entrada-1)
			j += 1;
		else
			j = 0;

		if (i == 0)
			j = 0;

		vetor[i] = j;
	}

	for (i = 0; i < 1000; i++)
		printf("N[%d] = %d\n", i, vetor[i]);

	return 0;
}