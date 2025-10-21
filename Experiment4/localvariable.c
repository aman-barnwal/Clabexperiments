#include <stdio.h>

// Global variable
int g = 10;

void func() {
    int l = 5;  // Local variable
    printf("Inside func():\n");
    printf("Global variable g = %d\n", g);
    printf("Local variable l = %d\n", l);
}

int main() {
    func();
    printf("\nInside main():\n");
    printf("Global variable g = %d\n", g);
    
    // Trying to access local variable 'l' here will cause an error
    // printf("Local variable l = %d\n", l);  // ❌ Error: 'l' undeclared

    return 0;
}
