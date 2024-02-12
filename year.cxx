/* C program that calculates and prints the bonus amount of the employee:
Date Feb 12 2024
By IkimathiG */
#include <stdio.h>

int main() {
    float salary, bonus, net_bonus;
    int years_of_service;

    printf("Enter your salary:\n ");
    scanf("%f", &salary);

    printf("Enter your years of service:\n ");
    scanf("%d", &years_of_service);

    if (years_of_service > 5) 
     {bonus = salary * 0.05;} 
     else
     { bonus = 0;}

    net_bonus = bonus;

    printf("Your salary is %.2f\n", salary);
    printf("Your years of service is %d\n", years_of_service);
    printf("Your bonus amount is %.2f\n", bonus);
    printf("Your net bonus amount is %.2f\n", net_bonus);

    return 0;
}