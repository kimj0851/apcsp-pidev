#include <stdio.h>

int areaOfCircle (float a)
{
return 3.14*a*a;
}


int main()
{
  float r;
  for (float i = 3; i < 11; i++)
  {
  r = areaOfCircle(i);
  printf("The area of a circle with radius %f is %f\n",i,r);
  }
}
