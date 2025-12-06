#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int positive = 0, negative = 0, odd = 0, even = 0;

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\nCount of positive numbers: %d", positive);
    printf("\nCount of negative numbers: %d", negative);
    printf("\nCount of even numbers: %d", even);
    printf("\nCount of odd numbers: %d\n", odd);

    return 0;
}
