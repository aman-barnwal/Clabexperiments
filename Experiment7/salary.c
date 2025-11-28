#include <stdio.h>

struct emp {
    char name[20];
    float basic, gross;
};

int main()
{
    struct emp e;

    printf("Enter name: ");
    scanf("%s",e.name);

    printf("Enter basic salary: ");
    scanf("%f",&e.basic);

    e.gross = e.basic + (0.52 * e.basic);

    printf("Gross Salary = %.2f", e.gross);
    return 0;
}

