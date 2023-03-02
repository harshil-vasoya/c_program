#include <stdio.h>
int main()
   
{    
 long long i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%ld",&number);

    while(i<=number)

    { 

      fact=fact*i; 
      i++

   }    
  printf("Factorial of is: %ld",fact); 

return 0; 

}   