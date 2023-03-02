#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a , b ;
    printf("enter your number a=");
    scanf("%d",&a);
    printf("\n enter your number b=");
    scanf("%d",&b);
    if(a>b)
    {
    	printf("%d is largest ", a);

    }
    if (b>a)
    {
    	printf("%d is largest", b);
    }
    if(a==b)
    {
    	printf("%d and %d both are eqaul", a ,b);
    }
	return 0;
}