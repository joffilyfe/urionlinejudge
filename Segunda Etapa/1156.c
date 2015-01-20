#include <stdio.h>

int main(void) {

	int i, dividendo;
	float sum;
	i = sum = 0;

	for (i = 1, dividendo = 1; i <= 39; i += 2, dividendo *= 2) {
		sum += (float)i/dividendo;
	}
	
	printf("%.2f\n", sum);
	return 0;	
}