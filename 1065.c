#include <stdio.h>

int main(void) {
	int i, p = 0, v = 0;

	for (i=0; i < 5; i++) {
		scanf("%d", &v);
		if (v < 0)
			v = v * (-1);
		
		if (v%2 == 0)
			p++;
	}

	printf("%d valores pares\n", p);

	return 0;
}