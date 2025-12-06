#include <stdio.h>

int main() {
    int a, b, c, d;
    int limit = 10000;   // You can increase for more results

    printf("Ramanujan Numbers up to %d are:\n", limit);

    for (a = 1; a <= 100; a++) {
        for (b = a + 1; b <= 100; b++) {
            for (c = a + 1; c <= 100; c++) {
                for (d = c + 1; d <= 100; d++) {
                    int n1 = a*a*a + b*b*b;
                    int n2 = c*c*c + d*d*d;

                    if (n1 == n2 && n1 <= limit)
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", n1, a, b, c, d);
                }
            }
        }
    }

    return 0;
}

