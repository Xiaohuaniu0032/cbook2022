/* Program for illustrating the operators
   operator.c
*/

#include <stdio.h>

int main()
{
   int a=1,b=2,c=3,d;
   printf("The value of a = %d, b = %d, c = %d",a,b,c);
   printf("\nThe value of a+b is %d",a+b);
   printf("\nThe value of a>b is %d",a>b);
   printf("\nThe value of a<b || a<c is %d",a<b || a<c);
   printf("\nThe value of b!=c is %d", b!=c);
   
   d = c++;
   printf("\nThe value of d is %d",d);
   printf("\nThe value of c is %d",c);
   printf("\n");
}