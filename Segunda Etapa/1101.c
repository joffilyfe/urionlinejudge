#include <stdio.h>

int main(void) {

	int x, y, aux, i, sum;

	while(1) {
		scanf("%d %d", &x, &y);
		sum = 0;
		if (x > y) {
			aux = x;
			x = y;
			y = aux;
		}
		if (x == 0 || y == 0)
			break;

		for (i = x; i <= y; i++) {
			printf("%d ", i);
			sum += i;
		}
			printf("Sum=%d\n", sum);
	}

	return 0;
}