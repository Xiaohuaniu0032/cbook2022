/* To find the bonus and gift
   bonus.c
*/

#include <stdio.h>
#include <ctype.h>


int main()
{
   char gender;
   float bonus;
   int salary;


   printf("Enter gender <F or M>\n");
   gender = getchar();

   printf("Enter salary: \n");
   scanf("%d", &salary);

   if (tolower(gender) == 'f'){
      bonus = 0.10 * salary;
      printf ("Bonus = %7.2f", bonus);
      printf("\nGift as saree\n");
   }else{
      bonus = 0.15 * salary;
      printf ("Bonus = %7.2f", bonus);
      printf("\nGift as watch\n");
   }

   return 0;
}