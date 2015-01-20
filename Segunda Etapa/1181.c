#include <stdio.h>
#define LEN 12

float somaLinha(float *matriz);
float mediaLinha(float *matriz);

int main(void) {

	float matriz[LEN][LEN], entrada, resultado;
	int linha, i, j;
	char operacao;

	//ler a linha
	scanf("%d", &linha);
	getchar();
	//ler a operação
	scanf("%c", &operacao);
	// getchar();

	for (i = 0; i < LEN; i++) {
		for (j = 0; j < LEN; j++) {
			scanf("%f", &entrada);
			matriz[i][j] = entrada;
		}
	}

	if (operacao == 'S') {
		resultado = somaLinha(matriz[linha]);
	} else {
		resultado = mediaLinha(matriz[linha]);
	}

	printf("%0.1f\n", resultado);

	return 0;
}

float somaLinha(float *matriz) {
	int i;
	float sum = 0;

	for (int j = 0; j < LEN; j++) {
		sum += matriz[j];
	}

	return sum;
}

float mediaLinha(float *matriz) {
	int i, qtd = 0;
	float media = 0, sum = 0;

	for (i = 0; i < LEN; i++) {
		sum += matriz[i];
	}

	media = sum / i;

	return media;
}