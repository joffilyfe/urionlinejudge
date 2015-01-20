#include <stdio.h>

int main(void) {

	int x, y, sum, i, entrada, j, k;
	sum = 0;

	scanf("%d", &entrada);

	for (i = 0; i < entrada; i++) {

		scanf("%d %d", &x, &y);

		for (j = 1; j <= y; j++, x++) {
			if (x % 2 != 0) {
				sum += x;
			} else {
				j--;
			}
		}

		printf("%d\n", sum);
		sum = 0;
	}

	return 0;
}