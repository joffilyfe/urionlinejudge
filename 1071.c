#include <stdio.h>

int main(void) {

	int x, y, aux, i, soma;
	soma = x = y = aux = i = 0;

	scanf("%d", &x);
	scanf("%d", &y);

	if (y < x) {
		aux = x;
		x = y;
		y = aux;
	}

	for (i = ++x; i < y; i++) {
		if (i%2 != 0)
			soma += i;
	}

	printf("%d\n", soma);
	return 0;
}