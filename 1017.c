#include <stdio.h>

int main(void) {

    double V, S, T, CALCULO, G;

    scanf("%lf", &T);
    scanf("%lf", &V);


    // V = S/T
    // S = V * T
    CALCULO = V * T;
    G = CALCULO / 12;

    printf("%0.3lf\n", G);

    return 0;
}