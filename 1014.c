#include <stdio.h>


int main(void) {

	int km;
	float l;
	km = l = 0;

	scanf("%d", &km);
	scanf("%f", &l);

	printf("%.3f km/l\n", (km/l));
	return 0;
}