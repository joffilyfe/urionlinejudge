#include <stdio.h>

int main(void) {

	int n, i;
	n = i = 0;

	scanf("%d", &n);
	
	for(i = 1; i <= n; i++) {
		if (i%2 == 0)
			printf("%d^2 = %d\n", i, i*i);
	}

	return 0;
}