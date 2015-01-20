#include <stdio.h>

int main(void) {

	int i, n, par, impar, positivo, negativo;
	i = n = par = impar = positivo = negativo = 0;

	for (i = 0; i < 5; i++) {
		scanf("%d", &n);

		if (n > 0) {
			positivo++;
		} else {
			if (n != 0)
				negativo++;
		}

		if (n%2 == 0)
			par++;
		else
			impar++;
	}

	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", positivo);
	printf("%d valor(es) negativo(s)\n", negativo);
	return 0;
}