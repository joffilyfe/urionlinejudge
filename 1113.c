#include <stdio.h>

int main(void) {

	int n, i, x, y;
	n = i = x = y = 0;

	while(scanf("%d %d", &x, &y) && x != y) {
		if (x > y)
			printf("Decrescente\n");
		else if (y > x)
			printf("Crescente\n");
	}

	return 0;
}