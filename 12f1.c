#include <stdio.h>
int main(int argc, char const *argv[])
{ 
	int x,flag,a=0 ;
	printf("enter a value x for finad a digit in x , x=");
	scanf("%d",&x);
	
	
	for (int i = 1; x!=0; ++i)
	{
		x=x/10;
		a++;
	
	}
	
		printf("digit in your number is %d",a);
	
	
	return 0;

}