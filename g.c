#include <stdio.h>
int main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      } 
      for (int j= 1; j <=i; ++j)
      {
             printf("%d ",i);
      }
      printf("\n");
   }
   return 0;
}
