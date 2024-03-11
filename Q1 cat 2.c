/*program to calculate bill
Date 11 mar 2024
Compiled by IkimathiG*/
#include <stdio.h>

int main() {
int customerID, unitConsumed;
char customerName;
float chargesPerUnit, totalAmount, bill;

// Prompt the user to enter CustomerID, CustomerName, and UnitConsumed
printf("Enter Customer ID: ");
scanf("%d", &customerID);
printf("Enter Customer Name: ");
scanf("%s", customerName);
printf("Enter Units Consumed: ");
scanf("%d", &unitConsumed);

// Use if..else statement to check the given conditions and apply necessary calculations
if (unitConsumed <= 300) {
chargesPerUnit = 175;
} else if (unitConsumed > 300 && unitConsumed < 600) {
chargesPerUnit = 200;
} else if (unitConsumed >= 600 && unitConsumed < 800) {
chargesPerUnit = 300;
} else {
chargesPerUnit = 400;
}
// Calculate the total bill
bill = unitConsumed * chargesPerUnit;

// Apply surcharge if bill exceeds Kshs. 500
if (bill > 500) {
bill += bill * 0.20; // 20% surcharge
}
// Ensure the minimum bill is Kshs. 200
if (bill < 200) {
bill = 200;
}
// Displaying the output
printf("\nCustomer ID: %d\n", customerID);
printf("Customer Name: %s\n", customerName);
printf("Units Consumed: %d\n", unitConsumed);
printf("Charges per Unit: Ksh %.2f\n", chargesPerUnit);
printf("Total Amount to Pay: Ksh %.2f\n", bill);

return 0;
}