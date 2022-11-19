/* program to find Body Mass Index value
   bmi.c
*/

#include <stdio.h>

int main()
{
   float w,h,bmi;
   printf("Enter the w (in kg) & h (in m) values: ");
   scanf("%f %f",&w,&h);
   
   bmi = w / (h*h);
   printf("Weight = %.2f",w);
   printf("\nHeight = %.2f",h);
   printf("\nBody Mass Index = %.5f",bmi);

   return 0;
}