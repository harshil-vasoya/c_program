#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num ,i,y=0;
	printf("enter your number=");
	scanf("%d",&num);
	i=1;

	while(num!=0){
		y++;
		
		num=num/10;

	}
	printf("digit of this number is %d",y);



	
	return 0;
}