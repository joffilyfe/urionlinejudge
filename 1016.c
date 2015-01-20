#include <stdio.h>

int main(void) {

    double D, RESULTADO, CALCULO, V;

    //Como a velocidade entre eles é constante, existe uma velocidade relativa
    //porque VA >= VB
    //O pensamento é como se o carro A estivesse parado em relação ao carro B
    //Então basta calcular o tempo que o carro B leva para percorrer X KM
    //VELOCIDADE RELATIVA = 30km

    scanf("%lf", &D);
    V = 8.33333333;
    D = D * 1000;
    CALCULO = (D/V) / 60;

    printf("%0.0lf minutos\n", CALCULO);

    return 0;
}