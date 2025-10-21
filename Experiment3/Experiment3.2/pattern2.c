#include <stdio.h>

int main() {
    int i, j;
    char ch = 'A';   // Start with capital A

    for (i = 1; i <= 5; i++) {        // Number of rows
        for (j = 1; j <= i; j++) {    // Print letters per row
            printf("%c ", ch);
            ch++;                     // Move to next alphabet
        }
        printf("\n");
    }

    return 0;
}

