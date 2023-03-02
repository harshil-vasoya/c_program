#include <stdio.h>
int Length(char*);
 
int main() 
{
   char string1[25];
   int length1;
   printf(" Input a string : ");
   fgets(string1, sizeof string1, stdin);
   
   length1= Length(string1);
   printf(" The length of the string %s is : %d ", string1, length1-1);
   printf("\n\n");
   return 0;

}
 
int Length(char* cstring) {
   int count = 0;
   while (*cstring != '\0') 
   {
      count++;
      cstring++;
   }
   return count;
}