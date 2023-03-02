#include<stdio.h>
int main()
{
    int a , b , x ;
    
    printf("enter your aerthmetic opreatar , \n1 for mutiplication \n2 for divison \n3 for substraction \n4 for sum");
    scanf("%d",&x);
    printf("\n your your frist number a=");
    scanf("%d", &a);

    printf("\n your second number b= ");
    scanf("%d",&b);

    switch (x)
    {
    case 1 :
       printf("mutiplication of %d and %d is = %d", a , a , a*b);
        break;
    
    case 2 :
       printf("divison of %d and %d is = %d", a , a , a/b);
        break;

    case 3 :
       printf("substraction of %d and %d is = %d", a , a , a-b);
        break;
        
    case 4 :
       printf("sum of %d and %d is = %d", a , a , a+b);
        break;


    case 5 :
      
         printf("choose any one of 1 to 4");  
         break;  
    

    }
}