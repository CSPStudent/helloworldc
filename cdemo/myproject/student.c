#include <stdio.h>
#include <string.h>

struct Student{
  char firstn[50];
  char lastn[50];
  int age;
  int stid;
};


void foo()
{
  int y;
  struct Student studentarr[10];
  int i;
  char input[256];

  for (i = 0; i < 10; i++)
  {
     
     printf("What is the first name of the new member?\n");
     fgets(input, 256, stdin);
     sscanf(input, "%s", studentarr[i].firstn);
     printf("What is the last name of the new member?\n");
     fgets(input, 256, stdin);
     sscanf(input, "%s", studentarr[i].lastn);
     printf("What is the age of the new member?\n");
     fgets(input, 256, stdin);
     sscanf(input, "%d", &studentarr[i].age);
     printf("What is the student ID of the new member?\n");
     fgets(input, 256, stdin);
     sscanf(input, "%d", &studentarr[i].stid);

  printf("Do you want to add another person? type 0 for yes and 1 for no.\n");
     fgets(input, 256, stdin);
     sscanf(input, "%d", &y);

  if (y == 1)
  break;
}
int z;

for (z = 0; z < (i + 1); z++)
{
 printf("Name: %s %s, age: %d, ID: %d\n", studentarr[z].firstn, studentarr[z].lastn, studentarr[z].age, studentarr[z].stid);
}
}


