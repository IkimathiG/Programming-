// c function to find for fine 
#include <stdio.h>

int main() {
    // Step I
    int bookID, dueDate, returnDate;
    printf("Enter Book ID:\n");
    scanf("%d", &bookID);
    printf("Enter Due Date:\n");
    scanf("%d", &dueDate);
    printf("Enter Return Date:\n");
    scanf("%d", &returnDate);

    // Step II
    int daysOverdue = returnDate - dueDate;

    // Step III
    int fineRate, fineAmount;
    if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

    fineAmount = daysOverdue * fineRate;

    // Step IV
    printf("Book ID: %dDue Date: %dReturn Date: %dDays Overdue: %dFine Rate: Kshs. %dFine Amount: Kshs. %d", 
           bookID, dueDate, returnDate, daysOverdue, fineRate, fineAmount);

    return 0;
}