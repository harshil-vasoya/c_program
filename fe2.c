#include <stdio.h>
float number1 , number2,sum1=0,sum2=0,x=0,y=0,z=0;
float fun1(int number1);

int main(int argc, char const *argv[])
{
    int number3 , number4;
    scanf("%f",&number1);
    scanf("%f",&number2);
    number3=number1*1000;
    number4=number2*1000;
    y=fun1(number3);
    z=fun1(number4);
    if(y>z)
        printf("%.3f",number1);
    else if(y<z)
        printf("%.3f",number2);
    else
        printf("-1");

    return 0;
}
float fun1(int number1)
{ sum1=0;
    while(number1>9)
    {
        x=number1%10;
        number1=number1/10;
        sum1=sum1+x;
        number1++;
    }
    sum1=sum1+number1;
    
    return sum1;
}
