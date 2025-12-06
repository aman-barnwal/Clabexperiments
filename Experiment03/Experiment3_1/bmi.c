// C program to calculate BMI taken by the user
#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("\nYour BMI = %.2f\n", bmi);

    if (bmi < 15)
        printf("Category: Starvation\n");
    else if (bmi >= 15 && bmi < 17.5)
        printf("Category: Anorexic\n");
    else if (bmi >= 17.5 && bmi < 18.5)
        printf("Category: Underweight\n");
    else if (bmi >= 18.5 && bmi < 25)
        printf("Category: Ideal\n");
    else if (bmi >= 25 && bmi < 30)
        printf("Category: Overweight\n");
    else if (bmi >= 30 && bmi <= 40)
        printf("Category: Obese\n");
    else
        printf("Category: Morbidly Obese\n");

    return 0;
}


