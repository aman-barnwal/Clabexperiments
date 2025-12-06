#include <stdio.h>
#define SQUARE(x) (x * x)

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Square = %d\n", SQUARE(n));
    return 0;
}

