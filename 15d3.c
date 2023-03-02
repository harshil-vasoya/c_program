1#include <stdio.h>
int main()
{
   int i, j, raw,number = 1;
   printf("enter number of raw =");
   scanf("%d",&raw);
   for (i = 1; i <=raw; i++) {
   
      for (j = 1; j <= i; ++j) {
         printf("%d", number);
         ++number;
      }
 		if(number>=3)
 			number=number-i+1;
      printf("\n");
   }
   return 0;
}
