#include <stdio.h>

int main(void) {

	int x, y, sum, i, entrada, j, aux, loops = 0;
	sum = 0;

	while(scanf("%d", &entrada) && entrada != 0) {

		sum = 0;
		loops = 0;
		while (loops < 5) {

			if (entrada % 2 == 0) {
				sum += entrada;
				loops++;
			}
			entrada++;
		}

		printf("%d\n", sum);
	}

	return 0;
}