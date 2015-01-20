#include <stdio.h>

int main(void) {

	int entrada, i, j, contador;
	entrada = i = 0;
	contador = 1;

	scanf("%d", &entrada);
	
	for (i = 0; i < entrada; i++) {
		for (j = 0; j < 3; j++, contador++) {
			printf("%d ", contador);
		}
		printf("PUM\n");
		contador += 1;
	}

	return 0;
}