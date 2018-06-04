#include <stdio.h>

float circlefunction(float a, float b)
{
  return (a * (b * b));
}

int main()
{	
  char input[256];
  int age;
  float radmin;
  float radmax;
  
  printf("What do you want the minimum radius to be?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%f", &radmin);

  printf("Your minimum radius is %f, what do you want your max radius to be?\n", radmin);
  fgets(input, 256, stdin);
  sscanf(input, "%f", &radmax);

  int i;
  float a;
  float p = 3.141592;
  float x = radmin;

    for (i = 0; i < (radmax - x); i++)
{
  a = circlefunction(p, radmin);
  printf("area of circle with radius %f is %f,  \n", radmin, a);
  radmin++;
}
} 



