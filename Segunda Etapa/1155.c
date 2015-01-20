#include <stdio.h>

int main(void) {

	int i;
	float sum;
	i = sum = 0;

	for (i = 1; i <= 100; i++) {
		sum += (float)1/i;
	}
	printf("%.2f\n", sum);
	return 0;	
}