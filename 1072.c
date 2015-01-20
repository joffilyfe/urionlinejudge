#include <stdio.h>

int main(void) {

	int x, n, i, in, out;
	x = n = i = in = out = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &x);

		if (x >= 10 && x <= 20)
			in++;
		else
			out++;

	}

	printf("%d in\n", in);
	printf("%d out\n", out);

	return 0;
}