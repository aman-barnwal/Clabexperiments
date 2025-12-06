#include <stdio.h>

struct book {
    int id;
    char title[20];
};

int main()
{
    struct book b;

    printf("Enter book id and name: ");
    scanf("%d %s",&b.id,b.title);

    printf("ID: %d\nName: %s", b.id,b.title);
    return 0;
}

