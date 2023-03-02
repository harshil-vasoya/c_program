#include <stdio.h>
int main(int argc, char const *argv[])
{ int x , y=0;
	printf("enter a value x for finad a sum of first and last digit of x, x=");
	scanf("%d",&x);
	
	y=x%10;
	
	for (int i = 1; i<1000; ++i)
	{
		x=x/10;
		if(x>0 && x<10)
			break;
	

		}
		printf("sum of your first digit and last digit of your number is %d",x+y);
		


	
	
	
	return 0;

}