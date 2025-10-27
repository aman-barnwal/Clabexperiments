// WAP to check if the triangle is valid or not. If the validity is established, check if the triangle is isosceles, equilateral, right-angled, or scalene. Take sides of the triangle as input from a user.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check validity of the triangle
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The triangle is valid.\n");

        if (a == b && b == c)
            printf("It is an Equilateral triangle.\n");

        else if (a == b || b == c || a == c)
            printf("It is an Isosceles triangle.\n");

        else if ((a * a + b * b == c * c) ||
                 (a * a + c * c == b * b) ||
                 (b * b + c * c == a * a))
            printf("It is a Right-angled triangle.\n");

        else
            printf("It is a Scalene triangle.\n");
    }
    else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}

