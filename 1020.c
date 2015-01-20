#include <stdio.h>


int main(void) {

	int a, m, d, t, x;
	a = m = d = t = x = 0;

	scanf("%d", &t);
	a = t / 365;
	m = (t % 365) / 30;
	d = (t%365) - 30;

	if (m > 1) {
		x = m - 1;
		x = x * 30;
		d = d - x;

	}
	printf("%d ano(s)\n", a);
	printf("%d mes(es)\n", m);
	printf("%d dia(s)\n", d);
	return 0;
}