#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a , b , c ;
	printf("please enter your number a=" );
	scanf("%d",&a);
	printf("\n please enter your number b=");
	scanf("%d" , &b);
	printf("enter your aerthmetic opreatar , \n1 for mutiplication \n2 for divison \n3 for substraction \n4 for sum \n");
    scanf("%d",&c);
    if (c==1)

    {
     	printf("mutiplication of %d and %d is %d", a , b , a+b);
    }
    if (c==2)
    {
    	printf("divison of %d and %d is %d", a , b ,a/b);

    }
    if (c==3)
    {
    	printf("substraction of %d and %d is %d", a, b, a-b);
    }
    if (c==4)
    {
    	printf("sum of %d and %d is %d", a, b, a+b);
    }
	return 0;
}