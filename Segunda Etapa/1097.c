#include <stdio.h>

int main(void) {

	int i, j, auxiliar;

	for (i = 1; i < 10; i += 2) {
		for(j = 7 + i - 1, auxiliar = 3; auxiliar > 0; j--, auxiliar--) {
			printf("I=%d J=%d\n", i, j);
		}
	}

	return 0;
}