#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 7;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 1.23;
  float e = 3.45;

  printf("The value of d is %f and its location is %d\n", d, &d);
  printf("The value of e is %f and its location is %d\n", e, &e);

  float* ptrd;
  float* ptre;

  ptrd = &d;
  ptre = &e;

  *ptrd = 4.56;
  *ptre = 7.89;

  printf("d is now %f and e is now %f\n", d, e);
}




