#include <stdio.h>

int main(void) {

    int N, H;
    double V, RESULTADO;

    scanf("%d", &N);
    scanf("%d", &H);
    scanf("%lf", &V);


    RESULTADO = H * V;

    printf("NUMBER = %d\n", N);
    printf("SALARY = U$ %0.2lf\n", RESULTADO);


    return 0;
}