#include<stdio.h>
int main()
{
    int x  ;
   
   
   printf("please enter your months=");
   scanf("%d",&x);

    switch (x)
    {
    case 1 :
    case 3 :
    case 5 :
    case 7 :
    case 8 :
    case 10:
    case 12:
       printf("total days in your monts is 31");
        break;
    
   case 2 :
       printf("total number of days in your months is 28");
        break;

   case 4 :
    case 6 :
    case 9 :
    case 11 :
   
        printf(" total number of days in your monts is");
    
    default:

        break;

    }
}