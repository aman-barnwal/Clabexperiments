// WAP to declare a variable
#include <stdio.h>
int num = 10;

void show () {
printf("Value of num is show(): %d\n", num);
}

void change () {
num = 20;
printf("Value of num is change(): %d\n", num);
}

int main() {
printf("Initial value of num: %d\n", num);
show();
change();
show();
return 0;
}
