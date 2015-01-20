#include <stdio.h>

int main(void) {

	double numero_1, numero_2, numero_3, a, b, c;
	numero_1 = numero_2 = numero_3 = a = b = c = 0;

	scanf("%lf %lf %lf", &numero_1, &numero_2, &numero_3);

	//Setando o A com o maior valor
	if ( (numero_1 >= numero_2) && (numero_1 >= numero_3) ) {
		a = numero_1;
		b = numero_2;
		c = numero_3;

	} else if ( (numero_2 >= numero_1) && (numero_2 >= numero_3) ) {
		a = numero_2;
		b = numero_1;
		c = numero_3;
	} else {
		a = numero_3;
		b = numero_1;
		c = numero_2;
	}


	//Verificando os triângulos
	if ( a >= (b+c)) {
		printf("NAO FORMA TRIANGULO\n");
	} else if ( (a*a) == ( (b*b) + (c*c) ) ) {
		printf("TRIANGULO RETANGULO\n");

	} else if ( (a*a) > ( (b*b) + (c*c) ) ) {
		printf("TRIANGULO OBTUSANGULO\n");

	} else if ( (a*a) < ( (b*b) + (c*c) ) ) {
		printf("TRIANGULO ACUTANGULO\n");
	}

	//Verificações complementares

	if ( a == b && b == c) {
		printf("TRIANGULO EQUILATERO\n");
	}
	if ( (a == b && a != c) || (b == c && a != b) || (a == c && a != b) ) {
		printf("TRIANGULO ISOSCELES\n");
	}

	return 0;
}