// Wap that prompts user to enter their name and age
#include <stdio.h>
int main() {
char name[40];
int age;
printf("Enter your name: ");
scanf("%39s", name);
printf("Enter your age: ");
scanf("%d", &age);
return 0;
}
