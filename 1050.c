#include <stdio.h>

int main(void) {

	int dd = 0;

	scanf("%d", &dd);

	if (dd == 61) {
		printf("Brasilia\n");
	} else if ( dd == 71 ) {
		printf("Salvador\n");
	} else if ( dd == 11) {
		printf("Sao Paulo\n");
	} else if ( dd == 21) {
		printf("Rio de Janeiro\n");
	} else if ( dd == 32) {
		printf("Juiz de Fora\n");
	} else if ( dd == 19) {
		printf("Campinas\n");
	} else if ( dd == 27) {
		printf("Vitoria\n");
	} else if ( dd == 31) {
		printf("Belo Horizonte\n");
	} else {
		printf("DDD nao cadastrado\n");
	}

	return 0;
}