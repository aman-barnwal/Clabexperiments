#include <stdio.h>

union data {
    char city[20];
};

int main()
{
    union data d;
    printf("Enter City: ");
    scanf("%s",d.city);
    printf("City = %s", d.city);
    return 0;
}

