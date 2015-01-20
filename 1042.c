#include <stdio.h>

int main(void) {

	int numero_1, numero_2, numero_3;
	numero_1 = numero_2 = numero_3 = 0;

	scanf("%d %d %d", &numero_1, &numero_2, &numero_3);

	// Se 1 for maior que 2, 2 maior que 3 (3 é o menor)
	if ((numero_1 >= numero_2) && (numero_2 >= numero_3)) {
		printf("%d\n", numero_3);
		printf("%d\n", numero_2);
		printf("%d\n", numero_1);
		printf("\n");

	// Se 1 for maior que 2, 3 maior que 2 (2 é o menor)
	} else 	if ((numero_1 >= numero_2) && (numero_3 >= numero_2)) {
		printf("%d\n", numero_2);
		printf("%d\n", numero_3);
		printf("%d\n", numero_1);
		printf("\n");

	//Se 2 maior que 1, 1 maior que 3 (3 menor)
	} else if ((numero_2 >= numero_1) && (numero_1 >= numero_3)) {
		printf("%d\n", numero_3);
		printf("%d\n", numero_1);
		printf("%d\n", numero_2);
		printf("\n");

	//Se 2 maior que 3, 3 maior que 1 (1 menor)
	} else if ((numero_2 >= numero_3) && (numero_3 >= numero_1)) {
		printf("%d\n", numero_1);
		printf("%d\n", numero_3);
		printf("%d\n", numero_2);
		printf("\n");

	//Se 3 maior que 1, 1 maior que 2 (2 menor)
	} else if ((numero_3 >= numero_1) && (numero_1 >= numero_2)) {
		printf("%d\n", numero_2);
		printf("%d\n", numero_1);
		printf("%d\n", numero_3);
		printf("\n");

	//Se 3 maior que 2, 2 maior que 1 (1 menor)
	} else if ((numero_3 >= numero_2) && (numero_2 >= numero_1)) {
		printf("%d\n", numero_1);
		printf("%d\n", numero_2);
		printf("%d\n", numero_3);
		printf("\n");
	}


	printf("%d\n", numero_1);
	printf("%d\n", numero_2);
	printf("%d\n", numero_3);

	return 0;
}