#include <stdio.h>
 
int main(void) {
    int notas_100, notas_50, notas_20, notas_10, notas_5, notas_2, notas_1, valor = 0;
     
    //get valor 
    scanf("%d", &valor);
 
    printf("%d\n", valor);
    if (valor > 0) {
        //try
        notas_100 = (valor / 100);
        valor = (valor % 100);
 
        notas_50 = (valor / 50);
        valor = (valor % 50);
 
        notas_20 = (valor / 20);
        valor = (valor % 20);
 
        notas_10 = (valor / 10);
        valor = (valor % 10);
 
        notas_5 = (valor / 5);
        valor = (valor % 5);
 
        notas_2 = (valor / 2);
        valor = (valor % 2);
 
        notas_1 = (valor / 1);
 
        //print
        printf("%d nota(s) de R$ 100,00\n", notas_100);
        printf("%d nota(s) de R$ 50,00\n", notas_50);
        printf("%d nota(s) de R$ 20,00\n", notas_20);
        printf("%d nota(s) de R$ 10,00\n", notas_10);
        printf("%d nota(s) de R$ 5,00\n", notas_5);
        printf("%d nota(s) de R$ 2,00\n", notas_2);
        printf("%d nota(s) de R$ 1,00\n", notas_1);
    }
 
    return 0;
}