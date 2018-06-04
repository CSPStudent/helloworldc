#include <stdio.h>
#include <string.h>

float circlefunction(float a,float b)
{
  return (a * (b * b));
}


int main()
{
  int i;
  float p = 3.141592;
  float r = 3.5;
  float a;

  for (i = 0; i<11; i++)
{

  a = circlefunction(p, r);

 printf("area of circle with radius %f is %f, ", r, a);
  r++;
}
}
