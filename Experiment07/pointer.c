#include <stdio.h>

int main()
{
    int x = 10;
    int *p;

    p = &x;

    printf("Value = %d\n", *p);
    printf("Address = %p\n", (void *)p);

    return 0;
}

