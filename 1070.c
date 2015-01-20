#include <stdio.h>
 
 
int main(void) {
 
    int n, i = 0;
    scanf("%d", &n);
 
    for (i = 6; i > 0; n++) {
        if ( (n%2) != 0) {
            printf("%d\n", n);
            i--;
        }
    }
 
    return 0;
}