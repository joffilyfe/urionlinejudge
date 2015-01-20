#include <stdio.h>

int main(void) {

	float entrada, x, y, notaUm, notaDois;
	int i = 0;

	do {
		scanf("%f", &entrada);
		if (entrada >= 0 && entrada <= 10 && i < 2) {
			if (i == 0) {
				notaUm = entrada;
				i++;
			} else {
				notaDois = entrada;
				i++;
			}
		} else {
			printf("nota invalida\n");
		}

	} while ( i < 2);

	printf("media = %0.2f\n", (notaUm + notaDois) / 2);

	return 0;
}