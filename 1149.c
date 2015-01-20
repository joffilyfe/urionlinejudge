#include <stdio.h>


int main(void) {
	unsigned int A, N, i, R;

	A = N = i = R = 0;

	scanf("%d %d", &A, &N);

	while(N == 0) {
		scanf("%d", &N);
	}

	R = A;

	for (i=1; i < N; i++) {
		A = A + 1;
		R = R + A;
	}

	printf("%d\n", R);
	return 0;
}