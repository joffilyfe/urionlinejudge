#include <stdio.h>
#include <stdint.h>

int main(void) {
	int i, a, b, n, x, j;
	unsigned r;
	a = 0;
	b = 1;
	r = 0;

	scanf("%d", &x);
	for (j=0; j < x; j++) {

		scanf("%d", &n);

		if (n >= 2) {
			for (i = 2; i <= n;i++) {
				r = a + b;
				if (i == n)
					printf("Fib(%d) = %u\n", i, r);
				a = b;
				b = r;
			}
			a = 0;
			b = 1;
			r = 0;
		} else {
			printf("Fib(%d) = %d\n", n, n);
		}


	}
	return 0;
}