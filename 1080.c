#include <stdio.h>

int main(void) {

	int n, m, p, i;
	n = m = p = i = 0;

	for (i = 1; i <= 100;i++) {

		scanf("%d", &n);
		if (n > m) {
			m = n;
			p = i;
		}
	}

	printf("%d\n", m);
	printf("%d\n", p);
	return 0;
}