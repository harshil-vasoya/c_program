#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num ,x=0, y=0;
	printf("enter your number=");
	scanf("%d",&num);
	

	while(num!=0){
		x=num%10;
		y=y+x;
		num=num/10;		
	}
	 printf("sum of the digit of this number is %d",y);	
	return 0;
}