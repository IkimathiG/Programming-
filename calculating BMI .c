/*C program that calculates the Body Mass Index (BMI) based on my input for weight and height
Date Feb 12 2024
By IkimathiG*/
#include <stdio.h>

int main() {
    float weight, height, bmi;
 // entering values for  calculation
    printf("Enter your weight (in kilograms):\n ");
    scanf("%f", &weight);

    printf("Enter your height (in meters):\n ");
    scanf("%f", &height);
// formulae gor calculting
    bmi = weight / (height * height);

    printf("Your BMI is: %.2f\n", bmi);

    return 0;
}