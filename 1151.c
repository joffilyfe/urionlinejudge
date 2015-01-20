#include <stdio.h>

int main(void) {
	int i, a, b, r, n;
	a = 0;
	b = 1;
	r = 0;
	scanf("%d", &n);
	printf("%d %d", a, b);
	for (i = 2; i < n;i++) {
		r = a + b;
		printf(" %d", r);
		a = b;
		b = r;
	}
	printf("\n");
	return 0;
}