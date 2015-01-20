#include <stdio.h>

int main(void) {

	int j, aux;
	float i;
	for(i = 0; i < 2.2; i += 0.2) {
		for(j = 1; j <= 3; j++) {
			aux = i;
			if ((i - (int)aux ) == 0) {
				printf("I=%0.0f J=%.0f\n", i, (float)j+i);
			} else {
				if (i < 2) {
					printf("I=%0.1f J=%.1f\n", i, (float)j+i);
				} else {
					printf("I=%0.0f J=%.0f\n", i, (float)j+i);

				}
			}
		}
	}
	return 0;
}