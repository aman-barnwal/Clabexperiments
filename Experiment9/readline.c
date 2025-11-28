#include <stdio.h>

int main()
{
    FILE *fp = fopen("data.txt","r");
    char line[50];
    while(fgets(line,50,fp))
        printf("%s",line);
    fclose(fp);
    return 0;
}

