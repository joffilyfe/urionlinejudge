#include <stdio.h>
 
int main(void) {
 
    float salario, reajuste, percentual, novo_salario;
 
    scanf("%f", &salario);
 
    if ( (salario >= 0) && (salario <= 400.00) ) {
 
        novo_salario = salario * 1.15;
        reajuste = novo_salario - salario;
        percentual = 15;
 
    } else if ( (salario >= 400.01) && (salario <= 800.00) ) {
 
        novo_salario = salario * 1.25;
        reajuste = novo_salario - salario;
        percentual = 12;
 
    } else if ( (salario >= 800.01) && (salario <= 1200.00) ) {
 
        novo_salario = salario * 1.10;
        reajuste = novo_salario - salario;
        percentual = 10;
 
    } else if ( (salario >= 1200.01) && (salario <= 2000.00) ) {
        novo_salario = salario * 1.07;
        reajuste = novo_salario - salario;
        percentual = 7;
 
    } else {
        novo_salario = salario * 1.04;
        reajuste = novo_salario - salario;
        percentual = 4;     
    }
 
    printf("Novo salario: %0.2f\n", novo_salario );
    printf("Reajuste ganho: %0.2f\n", reajuste);
    printf("Em percentual: %0.0f %%\n", percentual);
 
    return 0;
}