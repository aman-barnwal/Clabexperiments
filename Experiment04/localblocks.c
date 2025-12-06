#include <stdio.h>
int main() {
int a =10;
printf("a = %d (accessible in main)\n", a);
{
   // inner block
   int b = 20;
   printf("a = %d (accessible inside inner block)\n", a);
   printf("b = %d (accessible inside inner block)\n", b);
   
}

// b is not accessible here
// printf("b = %d\n", b); // Error b will be undefined

{ 
    int c = 30;
    printf("c = %d (accessible only in this block)\n", c);
}

return 0;
}
   
