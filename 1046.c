#include <stdio.h>


int main(void) {

	int inicio, fim, hr = 0;

	scanf("%d %d", &inicio, &fim);


	hr = fim - inicio;

	if (hr < 0) {
		hr = 24 - inicio + fim;
	} else if (inicio == fim) {
		hr = 24;
	}

	printf("O JOGO DUROU %d HORA(S)\n", hr);
	return 0;
}