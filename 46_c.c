#include <stdio.h>

int main(void) {

	int hi,  hf, ht, mi, mf, mt;
	hi = hf = ht = mi = mf = mt = 0;

	scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

	//resolvendo as horas
	ht = hf - hi;
	if (ht < 0) {
		ht = 24 + hf - hi;
	}

	//resolvendo os minutos
	mt = mf - mi;
	if (mt < 0) {
		mt = 60 + mf - mi;
		ht--;
	}

	if ( (hf == hi) && (mf == mi) ) {
		printf("O JOGO DUROU 24 HORA(S)\n");
	} else {
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", ht, mt);
	}






	return 0;
}