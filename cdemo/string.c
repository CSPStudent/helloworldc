
#include <stdio.h>
#include <string.h>



int main()
{
  // str1 is a pointer to a constant - cannot change the contents of str1
 char myString[] = "abcdefghijklmnopqrstuvwxyz"; 
 char* str1 = "hello1";
 char* mystr1 = myString;

  printf("str1 : %s\n", mystr1);

  // DO NOT DO THIS - attempt to modify a character in a strong constant
  //   compiler will not complain though
  //*(str1 + 3) = 'c';



  // str2 is an array which holds a copy of the string constant
 int i;
char myString2[27];
char c = 'a';
 for (i = 0; i<27; i++)
{ 
 myString2[i] = c;
 c++;
}
 myString2[26] = '\0';
  printf("myString2 : %s\n", myString2);

  // OK to modify array

if (strcmp(myString, myString2) == 0)
  {
printf("the two above strings are identical\n");
}

  // str3 is also an array which holds a copy of the constant
  //   intialized to hold the string length 
 for (i = 0; i<27; i++)
{
  myString2[i] = myString2[i] - 32;
c++; 
}
myString2[26] = '\0';
  printf("new string : %s\n", myString2);

if (strcmp(myString, myString2) != 0)
  {
printf("String 1 and 2 are no longer identical\n");
}
 char myString3[54];

  strcpy(myString3, myString);
  strcat(myString3, myString2);

  printf("All three strings(lowercase, uppercase, combined) : %s, %s, %s\n", myString, myString2, myString3);
}
