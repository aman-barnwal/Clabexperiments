#include <stdio.h>
#include <string.h>

int main()
{
    char s[30];
    int i, len;

    printf("Enter string: ");
    scanf("%s", s);

    len = strlen(s);

    for(i=len-1;i>=0;i--)
        printf("%c", s[i]);

    return 0;
}

