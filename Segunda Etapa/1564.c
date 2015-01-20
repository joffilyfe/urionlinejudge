#include <stdio.h>

int main(void) {

	int entrada;

	while(scanf("%d", &entrada) != EOF) {
		if (entrada) {
			printf("vai ter duas!\n");
		} else {
			printf("vai ter copa!\n");
		}
	}
	return 0;
}