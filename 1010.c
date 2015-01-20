#include <stdio.h>

int main(void) {

	int x, y, x2, y2;
	float z, z2;
	x = y = z = x2 = y2 = z2 = 0;

	scanf("%d %d %f", &x, &y, &z);
	scanf("%d %d %f", &x2, &y2, &z2);

	printf("VALOR A PAGAR: R$ %.2f\n", ( (y * z) + (y2 * z2) ) );

	return 0;
}