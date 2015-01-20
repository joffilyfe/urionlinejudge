#include <stdio.h>

int main(void) {

    char NOME;
    double SALARIO, VENDAS, RESULTADO;


    scanf("%s", &NOME);
    scanf("%lf", &SALARIO);
    scanf("%lf", &VENDAS);

    RESULTADO = (SALARIO) + (VENDAS * 0.15);

    printf("TOTAL = R$ %.2lf\n", RESULTADO);

    return 0;
}