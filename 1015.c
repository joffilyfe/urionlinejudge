#include <stdio.h>
#include <math.h>

int main(void) {

    int X1, X2, Y1, Y2;
    double DISTANCIA;

    scanf("%d %d", &X1, &Y1);
    scanf("%d %d", &X2, &Y2);


    DISTANCIA =  sqrt( ( (X2 - X1) * (X2 - X1) ) + ( (Y2 - Y1) * (Y2 - Y1) ) );

    printf("%0.4lf\n", DISTANCIA);

    

    return 0;
}