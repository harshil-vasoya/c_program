#include <stdio.h>

int main()
{
    char x;

    printf("Enter any one character: ");
    scanf("%c", &x);

    if(x >= 'a' && x <= 'z') 
    {
        printf("'%c' is small alphabetr", x);
    }
    else if(x >= '0' && x <= '9')
    {
        printf("'%c' is digit", x);
    }
    else 
    {
        if(x >= 'A' && x <= 'Z')
        {
        printf("'%c' is capital alphabet", x);
        }
        else
        {
            printf("'%c' is special character", x);
        }
    }


    return 0;
}
