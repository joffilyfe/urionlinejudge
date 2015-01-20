#include <stdio.h>

int main(void) {

	int i, x, y, sum, aux;
	i = x = y = sum = aux = 0;

	scanf("%d %d", &x, &y);

	if (x > y) {
		aux = x;
		x = y;
		y = aux;
	}

	for (i = x; i <= y; i++) {
		if (i % 13 != 0) {
			sum += i;
		}
	}

	printf("%d\n", sum);

	return 0;
}