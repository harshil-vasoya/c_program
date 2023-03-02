#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf(" Enter the number1 = ");
    scanf("%d", &num1);
    printf("\n Enter the number2 = ");
    scanf("%d", &num2);
    printf("\n Enter the number3 = ");
    scanf("%d", &num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("\n Largest number = %d ",num1);
        }
        else
        {
            printf("\n Largest number = %d ",num3);
        }
    }
   else if (num2 > num3)
    {
        printf("\n Largest number = %d ",num2);
    }
    else
    {
        printf("\n Largest number = %d ",num3);
    }
    if(num1==num2 && num2==num3 && num3==num1)
    {
        printf("\n %d and %d and %d all are equal", num1 , num2 ,num3 );
    }
}