#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num ;
	printf("enter your number=");
	scanf("%d",&num);
	
	printf("revers of your number is :" );

	for (int i = 0; num!=0; ++i)
	{
	
		printf("%d",num%10);
		num=num/10;
		}	
	return 0;
}