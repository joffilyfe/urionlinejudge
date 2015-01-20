#include <stdio.h>


int main(void) {

    int X = 0, Y = 0, i = 1, q = 1;

    scanf("%d %d", &X, &Y);

    //loop
    for (i = 1; i <= Y;i++) {

        if (q == 1) {
            printf("%d", i);

        } else {
            printf(" %d", i);
        }

        if (q == X) {
            printf("\n");
            q = 0;
        }
        q++;
    }


    return 0;
}