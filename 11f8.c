#include <stdio.h>
int main(int argc, char const *argv[])
{ 
	int x,flag ;
	printf("enter a value x for finad a number is prime or not , x=");
	scanf("%d",&x);
	
	printf("your fector is :");
	
	for (int i = 2; i <x; ++i)
	{
		if(x%i==0)
		{
			printf("number is not prime");
			flag=1;

			break;
		}	
	
	}
	if(flag!=1){
		printf("number is prime");
	}
	
	return 0;

}