#include <stdio.h>

int main(void) {
	int h, m, s, hi, hf, mi, mf, si, sf, d, di, df;
	h = m = s = hi = hf = mi = mf = si = sf = d = di = df = 0;

	//fetch inicial day
	scanf("%*s %d", &di);

	//fetch hour initial
	scanf("%d : %d : %d", &hi, &mi, &si);
	
	//fetch final day
	scanf("%*s %d", &df);
	
	//fetch final hour
	scanf("%d : %d : %d", &hf, &mf, &sf);

	//calc day
	d = df - di;

	//calc hour
	h = hf - hi;
	if (h < 0) {
		h = 24 + h;
		d--;
	}

	//calc min
	m = mf - mi;
	if (m < 0) {
		m = 60 + m;
		h--;
	}

	//calc seconds
	s = sf - si;
	if (s < 0) {
		s = 60 + s;
		m--;
	}

	//reset day, wtf?
	if (d < 0) {
		d = 0;
	}

	//show results, bitch!
	printf("%d dia(s)\n", d);
	printf("%d hora(s)\n", h);
	printf("%d minuto(s)\n", m);
	printf("%d segundo(s)\n", s);

	return 0;
}