#include <stdio.h>
int fact(int n)
{
 int f = 1;
 for(int i = 1; i <=n; i++ )
   f = f*i;
   return f;
 }
 
 
 int main() {
 {
 
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    
    printf("Factorial = %d\n", fact(n));
    return 0;
    
  }
  
}
