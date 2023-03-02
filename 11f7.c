#include <stdio.h>
int main(int argc, char const *argv[])
{ 
	int x,c ;
	printf("enter a value x for finad a number is prime or not , x=");
	scanf("%d",&x);
	
	printf("your fector is :");
	
	for (int i = 2; i <x; ++i)
	{
		if(x%i==0)
		{
			printf("number is not prime");
			c=1;

			break;
		}	
	
	}
	if(c!=1){
		printf("number is prime");
	}
	
	return 0;

}