#include <stdio.h>


int main(void) {

    int X = 0, i = 1, q = 0;

    while(1) {
        scanf("%d", &X);
        if (X == 0) {
            break;
        } else {

            for (i = 1; i <= X; i++) {
                if (q == 0) {
                    printf("%d", i);
                } else {
                    printf(" %d", i);
                }
                q++;
            }
            q = 0;
            printf("\n");
        }
    }
    

    return 0;
}