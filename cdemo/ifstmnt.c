#include <stdio.h>

int main()
{
  int a = 0;

  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }

  int b = 0;
  int c = 3;

  // if statement to test is a is equal to 0
  if (b != c)
  {
    printf("b is not equal to c\n");
  }
  else
  {
    printf("b is equal to c\n");
  }
  
  // if statement to test is a is equal to 0
  if (b < c)
  {
    printf("b is less than c\n");
  }
  else
  {
    printf("b is not less than c\n");
  }
 
  // if statement to test is a is equal to 0
  if (b >= c)
  {
    printf("b is greater then or equal to c\n");
  }
  else
  {
    printf("b is not greater than or equal to c\n");
  }
  
  // if statement to test is a is equal to 0
  if (b == 5 && c == 6)
  {
    printf("b is 5 and c is 6\n");
  }
  else
  {
    printf("b is not 5 and/or c is not 6\n");
  }
  
  // if statement to test is a is equal to 0
  if (b == 2 || c == 3)
  {
    printf("b is 2 or c is 3\n");
  }
  else
  {
    printf("both b and c are correct or incorrect\n");
  }
 
  // if statement to test is a is equal to 0
  if (!(b == 0))
  {
    printf("b is NOT equal to 0\n");
  }
  else
  {
    printf("b is NOT not equal to 0\n");
  }
}
