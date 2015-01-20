#include <stdio.h>


int main(void) {

    unsigned int n, N = 1, i = 1;

    scanf("%d", &n);

    while( (n >= 1 && n <= 1000) ) {
        printf("%d %d %d\n", N, i*i, i*i*i);
        printf("%d %d %d\n", N, (i*i)+1, (i*i*i)+1 );
        n--;
        N++;
        i++;
    }
    return 0;
}