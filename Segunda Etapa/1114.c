#include <stdio.h>

int main(void) {

	int password = 0;

	while(1) {
		scanf("%d", &password);

		if (password == 2002) {
			printf("Acesso Permitido\n"); break;
		} else {
			printf("Senha Invalida\n");			
		}
	}
	return 0;
}