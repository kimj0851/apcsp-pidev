#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;
  int tmp;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);
   
  tmp = a;
  a = c;
  c = tmp;
  printf("a is %d and c is %d\n", a, c);
}
