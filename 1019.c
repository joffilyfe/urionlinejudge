#include <stdio.h>


int main(void) {

	int s, m, h, x, t;
	s = m = h = x = t = 0;

	scanf("%d", &t);
	h = t / 3600;
	m = t / 60;
	s = t % 60;

	if (h > 0)
		m -= 60;

	printf("%d:%d:%d\n", h, m, s);
	return 0;
}