#include <stdio.h>

int main() {
    int n, i, num, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++) {
        if (arr[i] == num)
            count++;
    }

    printf("\nThe number %d appears %d time(s) in the array.\n", num, count);

    return 0;
}
