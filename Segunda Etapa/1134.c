#include <stdio.h>

int main(void) {

	int i, pergunta, combustivel[] = {0, 0, 0};

	pergunta = 0;

	do {

		if (pergunta >= 1 && pergunta <= 3) {
				combustivel[pergunta-1] += 1;
		}
		scanf("%d", &pergunta);
	} while (pergunta != 4);
	

	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", combustivel[0]);
	printf("Gasolina: %d\n", combustivel[1]);
	printf("Diesel: %d\n", combustivel[2]);

	return 0;
}