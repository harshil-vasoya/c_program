#include <stdio.h>
int main()
   
{    
 int fector=0,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);
  printf("\n your facetors are=");

    while(fector<number)

    { 
      fector++;


      if(number%fector==0)
      {
        printf("%d ,",fector);
        if(fector!=number)printf(",");
      }
      
   }    
  
return 0; 

}   