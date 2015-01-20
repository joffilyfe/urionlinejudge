#include <stdio.h>

int main(void) {

    double pi, area, raio;

    scanf("%lf", &raio);

    pi = 3.14159;
    area = (pi) * (raio * raio);

    printf("A=%.4f\n", area);

    return 0;
}