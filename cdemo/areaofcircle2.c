#include <stdio.h>



float areaOfCircle(float radius)
{
   return 3.14 * radius * radius;
}
int main(int argc, char* argv[])
{
  float number1;
  float number2;
  char input1[256], input2[256];
  if (argc == 1) {
    printf("Put in first number\n");
    fgets(input1, 256, stdin);
    printf("Put in second number\n");
    fgets(input2, 256, stdin);
    sscanf(input1, "%f", &number1);
    sscanf(input2, "%f", &number2);
  }
  else 
  {
    sscanf(argv[1], "%f", &number1);
    sscanf(argv[2], "%f", &number2); 
  }
  
  if (number1 < number2)
  { 
    float i;
    for (i=number1; i<= number2; i++)
    {
      float r = areaOfCircle(i);
      printf("The area of circle with radius %f is %f\n", i, r);
    }
  }
  else
  {
    float ai;
    for (ai=number1; ai<= number2; ai++)
    {
      float r = areaOfCircle(ai);  
      printf("The area of circle with radius %f is %f\n", ai, r);
    }
  }
}
