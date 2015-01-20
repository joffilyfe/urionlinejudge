#include <stdio.h>

int main(void) {

	int entrada, i;
	i = entrada = 0;

	scanf("%d", &entrada);
	
	for (i = 1; i <= entrada; i++) {
		if (entrada % i == 0) {
			printf("%d\n", i);
		}
	}
	return 0;
}