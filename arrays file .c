// 3: Three-dimensional array
// C Program to store and print 24 values entered by the user

#include <stdio.h>
int main()
{
  int  a[3][3][2];
  
int test[3][3][2] = {
    {{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
    {{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}}};
    
  printf("Enter 24 values: \n");

  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      for (int k = 0; k < 2; ++k)
      {
        scanf("%d", & a [i][j][k]);
      }
    }
  }

  // Printing values with the proper index.

  printf("\nDisplaying values:\n");
  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 3; ++j)
    {
      for (int k = 0; k < 2; ++k)
      {
        printf("a [%d][%d][%d] = %d\n", i, j, k, a [i][j][k]);
      }
    }
  }

  return 0;
}
