#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num ,x=0,y=0,z;
	printf("enter your number=");
	scanf("%d",&num);
	z=num;
	while(num!=0){
		x=num%10;
		y=(y*10)+x;
		num=num/10;
	}

	if(y==z)printf("your number is  palindrome ");
	else printf("your number is not palindrome");
	return 0;
}