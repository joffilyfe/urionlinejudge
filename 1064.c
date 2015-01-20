#include <stdio.h>

int main(void) {
	int i, p = 0;
	float v = 0, sum = 0;

	for (i=0; i < 6; i++) {
		scanf("%f", &v);
		if (v >= 0) {
			sum += v;
			p++;
		}
	}

	printf("%d valores positivos\n", p);
	printf("%0.1f\n", sum/p );

	return 0;
}