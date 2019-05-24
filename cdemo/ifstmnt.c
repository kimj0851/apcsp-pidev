#include <stdio.h>

int main()
{
  int a = 0;
  int b = 69;
  // if statement to test is a is equal to 0
  if (a == 0)
  {
    printf("a is 0\n");
  }
  else
  {
    printf("a is not 0\n");
  }
  if (a != 0)
  {
    printf("a is not equal to 0\n");
  } 
  else
  {
    printf("a is equal to 0\n");
  } 
  if (a > 0)
  {
    printf("a is greater than 0\n");
  } 
  else 
  {
    printf("a is less then 0\n");
  }
  if (a >= 0)
   {
    printf("a is greater than or equal to 0\n");
   } 
  else
  { 
    printf("a is less than or equal to 0\n");
  }
  if (a == 0 &&  b==0)
  {
    printf("a is equal to 0 and b is equal to 0\n");
  }
  else
  { 
    printf("a is not equal to 0 and is b is not equal to 0\n");
  }
  if (a == 0 || b == 0)
  {
    printf("a is equal to 0 or b is equal to 0\n");
  }
  else
  {
    printf(" a is not equal to 0 or b is not equal to 0\n");
  }
  if (!(a == b))
  {
    printf("a is not equal to 0\n");
  }
  else
  {
   printf("a is equal to 0\n");
  } 
}
