#include <stdio.h>
int main()
{
   int i, j, raw,number = 1;
   printf("enter number of raw =");
   scanf("%d",&raw);
   for (i = 1; i <=raw; i++) {
      for (int x = i; x <=raw-1; ++x)
      {
         printf("    ");
      }
   
      for (j = 1; j <2*i; ++j) {
         if(j%2!=0)
         printf("%4d", i);
      else
         printf("    ");
      }
 		
      printf("\n");
   }
   return 0;
}
