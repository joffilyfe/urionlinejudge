#include <stdio.h>
#include <stdint.h>

int main(){
    unsigned X, Y;

    // printf("%lu\n", sizeof(X));
    while( (scanf("%u %u", &X, &Y) != EOF) ) {
        printf("%u\n", X ^ Y);
    }

    return 0;
}