/* Program to calculate tax amount
Date 11 mar 2024
Compiled by: IkimathiG*/

#include <stdio.h>

int main() {
float salary, tax = 0;

// Input the yearly salary of the employee
printf("Enter the yearly salary of the employee: ");
scanf("%f", &salary);

// Calculate tax based on the given conditions
if (salary <= 400000) {
tax = salary * 0.01; 
// 1% tax
} else if (salary > 400000 && salary <= 1000000) {
tax = (400000 * 0.01) + ((salary - 400000) * 0.15);
 // 1% on first 400,000 and 15% on remaining
} else if (salary > 1000000) {
tax = (400000 * 0.01) + (600000 * 0.15) + ((salary - 1000000) * 0.25);
 // 1% on first 400,000, 15% on next 600,000 and 25% on remaining
}

// Displaying the calculated tax
printf("Tax amount: %.2f\n", tax);

return 0;
}