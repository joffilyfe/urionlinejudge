#include <stdio.h>

int main(void) {

	int n, i;
	n = i = 0;

	scanf("%d", &n);
	
	for (i = 0; i <= n;i++) {
		if (i%2 != 0)
			printf("%d\n", i);
	}
	return 0;
}