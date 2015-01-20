#include <stdio.h>

int main(void) {

	int i, j, x, entrada, par[5], impar[5], count_par, count_impar;

	entrada = x = count_impar = count_par = 0;

	while (x < 15) {

		scanf("%d", &entrada);
		if (entrada % 2 == 0) {
			par[count_par++] = entrada;
		} else {
			impar[count_impar++] = entrada;
		}

		//vetor de pares enxeu, entao imprime e zera a contagem
		if (count_par == 5) {
			for (i = 0; i < count_par; i++) {
				printf("par[%d] = %d\n", i, par[i]);
			}
			count_par = 0;

		// vetor de impares enxeu, entao imprime e zera a contagem
		} else if (count_impar == 5) {
			for (i = 0; i < count_impar; i++) {
				printf("impar[%d] = %d\n", i, impar[i]);
			}
			count_impar = 0;

		// chegamos no ultimo loop e os vetores não enxeram, imprime assim mesmo
		} else if (x == 14){

			for (i = 0; i < count_impar; i++) {
				printf("impar[%d] = %d\n", i, impar[i]);
			}

			for (i = 0; i < count_par; i++) {
				printf("par[%d] = %d\n", i, par[i]);
			}

		}
		x++;
	}

	return 0;
}