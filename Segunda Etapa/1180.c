#include <stdio.h>

int main(void) {

	int i, j, menor, posicao, tamanho, vetor[1000], numero;
	i = j = menor = posicao = tamanho = 0;

	scanf("%d", &tamanho);
	for (i = 0; i < tamanho; i++) {
		scanf("%d", &numero);
		if (numero < menor) {
			menor = numero;
			posicao = i;
		}
	}

	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", posicao);

	return 0;
}