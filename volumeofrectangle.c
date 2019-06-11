#include<stdio.h>
#include <math.h>
int main() {
   float length, width, height, area;
   for (int j = 1; j <= 5; j++)
   {
     if (j==1)
   {
   printf("\nEnter the Length of Rectangular Prism : ");
   scanf("%f", &length);
   if (length < 0)
   {
     printf("please use a postive number");
      j--;
   }
   }
   else if (j==2)
   {
   printf("\nEnter the Width of Rectangular Prism : ");
   scanf("%f", &width);
   if (width < 0)
   {
     printf("please use a postive number");
      j--;
   }
   }
   else if (j==3)
   {
   printf("\nEnter the Height of Rectangular Prism : ");
   scanf("%f", &height);
   if (height < 0)
   {
     printf("please use a postive number");
      j--;
   }
   }
   else if (j==4)
   {
   area = length * width * height;
   printf("\nVolume of Rectangluarprism : %f\n", area);
   }
   else if (j==5)
   {
   return (0);
   }
   }
}
