#include <stdio.h>
int main(int argc, char const *argv[])
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
            printf("\n Largest number = %d \n",num1);
        }
        if(num3>num1)
        {
            printf("\n Largest number = %d \n",num3);
        }
    }
    if (num2 > num3)
    {
        printf("\n Largest number = %d \n",num2);
    }
    if(num3> num2)
    {
        printf("\n Largest number = %d \n",num3);
    }
    if (num1==num2 && num3==num2)
	{
	
		printf("all num are eqaul");
		
	}

    return 0;

	
}