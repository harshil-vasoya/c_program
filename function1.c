#include <stdio.h>
int addition();

int main(int argc, char const *argv[])
{
    int answer;

    answer=addition();
     printf("The addition of the two numbers is: %d\n",answer);
    return 0;
}
int addition()
{
    int num1 , num2 ;
    scanf("%d", &num1 );
    printf("\n");
    scanf("%d", &num2); 
    return num1+num2;
}
