#include <stdio.h>
// #define entrada 7

int main(void) {

	int i, j, diagD, diagE, entrada;

	while(scanf("%d", &entrada) != EOF) {
		for (i = 0, diagE = 0, diagD = entrada-1; i < entrada; i++, diagE++, diagD--) {
			for (j = 0; j < entrada; j++) {


				if (entrada % 2 != 0) {
					if (j == diagE && j != (entrada/2)) {
						printf("1");
					}
				} else {
					if (j == diagE) {
						printf("1");
					}
				}

				if (j == diagD) {
					printf("2");
				}

				if (j > diagE && j < diagD) {
					printf("3");
				}
				if (j < diagE && j > diagD) {
					printf("3");
				}

				if (j < diagE && j < diagD ) {
					printf("3");
				}

				if (j > diagE && j > diagD ) {
					printf("3");
				}
			}
			printf("\n");
		}
	}
	return 0;
}