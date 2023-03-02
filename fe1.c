#include <stdio.h>
int number1 , number2,sum1=0,sum2=0,x=0,y=0,z=0;
int fun1(int number1);
int fun2(int number2);
int main(int argc, char const *argv[])
{

	scanf("%d",&number1);
	scanf("%d",&number2);
	y=fun1(number1);
	z=fun1(number2);
	if(y>z)
		printf("%d",number1);
	else if(y<z)
		printf("%d",number2);
	else
		printf("-1");

	return 0;
}
int fun1(int number1)
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
