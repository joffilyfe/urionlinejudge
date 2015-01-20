#include <stdio.h>
 
int main(void) {
 
    int i, j, linha, diagonalDireita, diagonalEsquerda, tam = 0;;
    double entrada, sum;
    char operacao;
 
    scanf("%c", &operacao);
    getchar();
 
    for (i = 0, diagonalEsquerda = 0,diagonalDireita = 11; i < 12; i++, diagonalEsquerda++ ,diagonalDireita--) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &entrada);
            if ( j < diagonalEsquerda && j > diagonalDireita) {
                sum += entrada;
                tam++;
            }
        }
    }
 
    if (operacao == 'S') {
        printf("%0.1f\n", sum);
    } else {
        printf("%0.1f\n", sum / tam);
    }
 
    return 0;
}