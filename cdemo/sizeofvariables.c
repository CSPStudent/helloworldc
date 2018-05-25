#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'a';
  float c = 4.67;
  double d = 3.446759783764;
  // print value and size of an int variable
  printf("int a value %d and size %d bytes.\n", a, sizeof(a));

  printf("char b value %c and size %d bytes.\n", b, sizeof(b));
  
  printf("float c value %f and size %d bytes.\n", c, sizeof(c));

  printf("float d value %f and size %d bytes.\n", d, sizeof(d));
}

