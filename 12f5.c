#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num ,x=0,y=0,z;
	printf("enter your number=");
	scanf("%d",&num);
	z=num;
	for (int i = 0; num!=0; ++i)
	{
		x=num%10;
		y=(y)+(x*x*x);
		num=num/10;
	}

	if(y==z)printf("your number is  armstrong ");
	else printf("your number is not armstrong");
	return 0;
}