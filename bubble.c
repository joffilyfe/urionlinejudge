#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

#define NUMEROS 6

// Ordena os Número
int * ordena(int * vetor, int size) {

	int j, i, aux;
	j = i = aux = 0;

	for (i = size - 1; i >= 1; i--) {
		for (j = 0; j < i; j++) {
			if (vetor[j] > vetor[j + 1]) {
				aux = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = aux;
			}
		}
	}
	return vetor;
}

// gera números
int * gerarCartela(int * vetor, int quantidade) {

	srand(time(NULL) + rand());
	int i = 0;

	for (i = 0; i < quantidade; i++) 
		vetor[i] = rand() % 100 + 1;

	ordena(vetor, quantidade);

	return vetor;
}

//Sorteia Número
int sorteiaNumero() {
	int numero = 0;
	srand(time(NULL) + rand());
	numero = rand() % 100 + 1;

	return numero;
}
 

	// //gera os números nas cartelas
	// for (i = 0; i < 5; i++)
	// 	gerarCartela(cartelas[i], NUMEROS);

	// //mostra os números de cada cartela
	// for (i = 0; i < 5; i++) {
	// 	printf("Cartela %d\n", i + 1);
	// 	for(int j = 0; j < NUMEROS; j++) {
	// 		printf("%d ", cartelas[i][j]);
	// 	}
	// 	printf("\n");
	// }

	// nome {
	// 	cartela {numeros}
	// 	numeros
	// }
int main(void) {

	int cartelas[100][NUMEROS];
	int ganhador[100];
	char nome[100][100];
	int i, c, participantes, numero, temos_um_vencedor;
	numero = participantes = temos_um_vencedor = 0;
	i = 0;
	do {
		printf("Digite o seu nome: ");
		scanf("%[^\n]s", nome[i]);
		getchar();
		if ((strcmp("0", nome[i])) != 0) {
			gerarCartela(cartelas[i], NUMEROS);
			ganhador[i] = 0;
			printf("Bem vindo jogador (%s)\n", nome[i]);
			printf("Sua cartela é: ");
			for (c = 0; c < NUMEROS; c++)
				printf("%d ", cartelas[i][c]); printf("\n\n");
			i++;
			participantes++;
		}
	} while((strcmp("0", nome[i])) != 0);


	while(temos_um_vencedor == 0) {
		numero = sorteiaNumero();

		for(i = 0; i < participantes; i++) {
			for(c = 0; c < NUMEROS; c++) {
				if (numero == cartelas[i][c]) {
					printf("número (%d) existe na cartela (%d)\n", numero, i+1 );
					cartelas[i][c] = 0;
					ganhador[i] += 1;
					if (ganhador[i] == 6) {
						printf("o ganhador é %s\n", nome[i]);
						temos_um_vencedor = 1;
						break;
					}

				}

			}
		}
	}


	return 0;
}
	// int tamanho = sizeof(vetor) / sizeof(int);