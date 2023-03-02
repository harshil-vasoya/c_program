#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num ,x=0,y=0;
	printf("enter your number=");
	scanf("%d",&num);
	

	while(num!=0){
		x=num%10;
		y=(y*10)+x;
		num=num/10;
	}
	printf("digit of your number is :");
	while(y!=0){

		printf("\n%d",y%10);
		y=y/10;
	
	}	
	return 0;
}