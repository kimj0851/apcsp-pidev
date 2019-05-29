#include <stdio.h>
#include <string.h>



int main()
{
  int i;
  char string[26];
  for (i=0;i<26;i++)
  {
    string[i] = 'a' + i;
  }
  char string2[] = "abcdefghijklmnopqrstuvwxyz";
  if (strcmp(string, string2) == 0)
    printf("The strings are identical\n");
  else
    printf("The strings are different???\n");
  
  int a;
  for (a=0;a<26;a++)
  {
    string2[a] = string2[a] - 32;

  }
  printf("String 2 is  %s\n", string2);
  if (strcmp(string, string2) == 0)
    printf("The strings are identical\n");
  else
    printf("The strings are different???\n");
  char string3[52];
  strcpy(string3, string);
  strcat(string3, string2);
  printf("String 1 is %s\n", string);
  printf("String 3 is %s\n", string3);
}
