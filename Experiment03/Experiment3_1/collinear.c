// WAP to check if three points (x₁, y₁), (x₂, y₂), and (x₃, y₃) are collinear or not.
#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;
    
    printf("Enter x1, y1: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter x2, y2: ");
    scanf("%f %f", &x2, &y2);
    printf("Enter x3, y3: ");
    scanf("%f %f", &x3, &y3);
    
    // Area method: if area of triangle = 0 → collinear
    if ((x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2)) == 0)
        printf("Points are Collinear.\n");
    else
        printf("Points are NOT Collinear.\n");

    return 0;
}

