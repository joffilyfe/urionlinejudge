#include <stdio.h>

int main(void) {

	float a, b, c;
	a = b = c = 0;

	scanf("%f %f %f", &a, &b, &c);

	if ( ((a+b) > c) && ((a+c) > b) && ((c+b) > a) ) {
		printf("Perimetro = %0.1f\n", (a+b+c) );

	} else {
		printf("Area = %0.1f\n", ( ((a+b)/2) * c ));
	}
	return 0;
}