#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a , b , c;
	printf("your number a=");
	scanf("%d", &a);
	

	c=a>=0? printf("number is positive"): printf("number is negative");
		
	return 0;
}