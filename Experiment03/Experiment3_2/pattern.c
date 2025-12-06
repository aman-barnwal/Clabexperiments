// WAP to generate the following set of output (a pattern program).#include <stdio.h>

#include <stdio.h>

int main() {
    int i, j, k = 1;

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }

    return 0;
}

