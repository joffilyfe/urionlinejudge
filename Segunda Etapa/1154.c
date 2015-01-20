#include <stdio.h>

int main(void) {

	int sum, input, i;
	sum = 0;
	i = 0;

	do {
		scanf("%d", &input);
		if (input > 0) {
			sum += input;
			i++;
		}
	} while (input  > 0);

	printf("%.2f\n", (float)sum / i);

	return 0;
}