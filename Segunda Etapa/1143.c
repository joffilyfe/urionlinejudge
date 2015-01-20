#include <stdio.h>

//nossas funçoes
int fazQuadrado(int numero);
int fazCubo(int numero);

int main(void) {

	int i, entrada;
	scanf("%d", &entrada);

	for (i = 1; i <= entrada; i++) {
		printf("%d %d %d\n", i, fazQuadrado(i), fazCubo(i));
	}
	return 0;
}

//corpo das funçoes
int fazQuadrado(int numero) {
	numero *= numero;
	return numero;
}


int fazCubo(int numero) {
	numero *= numero * numero;
	return numero;
}