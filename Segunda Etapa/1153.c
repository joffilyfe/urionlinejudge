#include <stdio.h>

int fazFatorial(int numero);

int main(void) {

	int numero;

	scanf("%d", &numero);
	printf("%d\n", fazFatorial(numero));

	return 0;
}

int fazFatorial(int numero) {
	int i = 0;

	for (i = numero; i > 1; i--) {
		numero *= i - 1;
	}

	return numero;
}
