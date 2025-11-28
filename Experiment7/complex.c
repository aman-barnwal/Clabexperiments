#include <stdio.h>

struct complex {
    int r, i;
};

int main()
{
    struct complex a, b;

    printf("Enter real and imag of A: ");
    scanf("%d %d",&a.r,&a.i);

    printf("Enter real and imag of B: ");
    scanf("%d %d",&b.r,&b.i);

    printf("Sum = %d + %di", a.r+b.r, a.i+b.i);
    return 0;
}

