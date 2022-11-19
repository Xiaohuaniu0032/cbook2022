/*
   To find the number of purines and pyramidines
   pcount.c
*/

#include <stdio.h>

int main()
{
   int a,t,g,c;
   int purines,pyramidines;

   printf("\nEnter the respective values for nucleotides <a,t,g,c>\n");
   scanf("%d %d %d %d", &a, &t, &g, &c);

   int res;
   res = a - t;

   if (res == 0){
      purines = a + g;
      pyramidines = t + c;
      printf("No. of purines = %d\n", purines);
      printf("No. of pyramidines = %d\n", pyramidines);
   }else{
      printf("a and t should have same value\n");
   }
   
   return 0;
}