#include <stdio.h>

int main(void) {

	int a, b;
	a = b = 0;

	scanf("%d %d", &a, &b);

	if (b%a == 0) {
		printf("Sao Multiplos\n");
	} else {
		printf("Nao sao Multiplos\n");
	}

	return 0;
}