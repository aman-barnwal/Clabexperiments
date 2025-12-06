#include <stdio.h>
#define CUBE(x) (x * x * x)

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Cube = %d\n", CUBE(num));
    return 0;
}

