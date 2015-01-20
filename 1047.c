#include <stdio.h>

int main(void) {
	int h, m, hi, mi, hf, mf;
	h = m = hi = mi = hf = mf = 0;


	scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

	h = hf - hi;
	if (h < 0) {
		h = 24 - hi + hf;
	} 

	m = mf - mi;
	if (m < 0) {
		m = 60 - mi + mf;
		h = h-1;
	}

	if ( (hi == hf) && (mi == mf) ) {
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	} else {
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
	}

	return 0;
}