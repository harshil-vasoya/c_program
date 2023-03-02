#include <stdio.h>
int main(int argc, char const *argv[])
   
{    
 int x,ans=1,y=1, c,a=1,power;    
 printf("Enter a numbr : ");    
  scanf("%d",&x);

  printf("\n Enter the power of x =");
  scanf("%d", &power);

   while(power)
   {

    ans=ans*x;
    power--;
    
   }

   printf("\nyour answer is %d",ans);
    }