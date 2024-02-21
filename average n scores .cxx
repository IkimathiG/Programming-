 // Online C compiler to run C program online
#include <stdio.h>

int main() {
 int maths, biology, chemistry, average;
 int A,B,C,D,E;
  
  printf(" enter marks for maths, biology, chemistry\n:");
  scanf("%d %d %d",& maths, chemistry, biology);
  average= ( maths+biology+chemistry/3);
  
    if(average>=70 && average<=100){
     printf("you scored grade A");
    }
    else if(average>=60 && average<=69){
    printf("you scored grade B");
    }
    
    else if(average>=50 && average<=59){
     printf("you scored grade C");
    }
  else if(average>=40 && average<=49){
     printf("you  scored grade D");
  }
  else if(average>=1 && average<=39){
     printf("you scored grade E");
  }
    



    return 0;
}