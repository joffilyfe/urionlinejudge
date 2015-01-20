#include <stdio.h>
#include <string.h>

void first(char letter[]) {
    int x;
    for (x = 0; x < letter[x]; x++) {
        if ( (letter[x] >= 0x41 && letter[x] <= 0x5A) || (letter[x] >= 0x61 && letter[x] <= 0x7A)) {
            letter[x] = letter[x] + 3;
        }
    }
    printf("%s", letter );
}


int main(void) {

    unsigned n, number, len;
    char line[50], L[5][50];
    n = 0;

    scanf("%d", &n);

    while((n > 0)) {
        // scanf("%s", line);
        scanf("%s%*s", line);
        len = strlen(line);

        for (number=0; number < len;number++) {
            // printf("%c", line[number]);
            // first(line[number]);
            L[n][number] = line[number];
        }

        // printf("%s\n", L[n]);
        first(L[n]);

        n--;
        printf("\n");
    }

    return 0;
}