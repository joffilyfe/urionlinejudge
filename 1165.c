#include <stdio.h>
 
int main(void) {
 
    int num = 0, prime = 0, rep = 0;
    int i, j;
 
    scanf("%d", &rep);
 
    for (j=0; j < rep; j++) {
        scanf("%d", &num);
 
        prime = 0;
        for (i=2; i < num; i++) {
            if ( (num % i ) == 0 ) {
                prime++;
            }
        }
 
        if (prime > 0) 
            printf("%d nao eh primo\n", num);
        else
            printf("%d eh primo\n", num);
    }
 
    return 0;
}