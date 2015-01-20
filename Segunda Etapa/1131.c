#include <stdio.h>

int main(void) {

	int i, pergunta, empate, inter, gremio, x, y;
	i = pergunta = empate = inter = gremio = 0;

	do {
		i++;
		scanf("%d %d", &x, &y);
		//inter venceu
		if (x > y) {
			inter++;
		} else if (x < y) {
			gremio++;
		} else {
			empate++;
		}

		while (printf("Novo grenal (1-sim 2-nao)\n") && scanf("%d", &pergunta) && (pergunta != 1) && pergunta != 2);
	} while(pergunta == 1);
	
	printf("%d grenais\n", i);
	printf("Inter:%d\n", inter);
	printf("Gremio:%d\n", gremio);
	printf("Empates:%d\n", empate);

	if (inter > gremio) {
		printf("Inter venceu mais\n");
	} else if (inter < gremio) {
		printf("Gremio venceu mais\n");
	} else {
		printf("Nao houve vencedor\n");
	}
	return 0;
}