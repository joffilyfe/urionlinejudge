#include <stdio.h>

long long int fazFatorial(long long int numero);

int main(void) {

	int numero;
	int x, y;
	long long int sum = 0;

	while (scanf("%d %d", &x, &y) != EOF) {

		sum += fazFatorial(x) + fazFatorial(y);
		printf("%lld\n", sum);
		sum = 0;
	}	

	return 0;
}

long long int fazFatorial(long long int numero) {
	int i = 0;

	if (numero != 0) {
		for (i = numero; i > 1; i--) {
			numero *= i - 1;
		}
	} else {
		numero++;
	}
	return numero;
}
