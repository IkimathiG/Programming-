
/* 
introduction to programming
calculation of simple interest
By Ian 
*/

#include <stdio.h>

int main() {
  // interest = principle* rate/100*time
  
  int principle,rate ,time;
    float interest;
  
    printf("enter the amount of principle ksh:\n");
    scanf("d%",&principle);
    
    printf(" enter the rate ( in %%):\n");
    scanf("%d" ,&rate);
    
    printf("enter the time (in Years:\n)");
    scanf("%d",&time);
    
    // calculating simple interest
    interest= ( principle* rate/100*time);
    
    printf("simple interest=ksh%.2f\n", interest);
    return 0;
}