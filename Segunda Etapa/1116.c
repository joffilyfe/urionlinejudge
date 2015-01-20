#include <stdio.h>

int main(void) {

	int entrada, i, x, y, division;

	scanf("%d", &entrada);

	for (i = 0; i < entrada; i++) {
		scanf("%d %d", &x, &y);

		if (y == 0) {
			printf("divisao impossivel\n");
		} else {
			division = x / 6;
			printf("%0.1f\n", (float)x / y);
		}
	}
	return 0;
}