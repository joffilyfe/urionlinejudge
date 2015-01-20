#include <stdio.h>

int main(void) {

	int n, i;
	float x, y, z, r;
	x = y = z = n = r = 0;

	scanf("%d", &n);

	for (i = 0; i < n;i++) {
		scanf("%f %f %f", &x, &y, &z);
		r = ((x * 2) + (y * 3) + (z * 5)) / (2 + 3 + 5);
		printf("%.1f\n", r);
	}

	return 0;
}