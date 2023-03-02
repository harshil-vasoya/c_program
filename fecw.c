#include <stdio.h>
int main()
   
{    
 long long i=1,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%lld",&number);

    while(i<=number)

    { 

      fact=fact*i; 
      i++;

   }    
  printf("Factorial of is: %lld",fact); 

return 0; 

}   