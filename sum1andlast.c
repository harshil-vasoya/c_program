#include <stdio.h>
int main(int argc, char const *argv[])
{
	long  number ,digit1 ;
	printf("enter your number A=");
	scanf("%ld",&number);
digit1=number%10;

	while((number/10)!=0)
	{
		number=number/10;
	}

	printf("sum id %ld", number+digit1);
		return 0;
}