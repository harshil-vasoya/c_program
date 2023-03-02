#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a;
	printf("argc =%d \n ", argc);
	printf("please enter your number =");
	scanf("%d",&a);
	if(a % 2==0)
	
		printf(" last digit of your number is even");

	
	if(a % 2!=0)
		printf(" last digit of your number is odd");
	
	return 0;
}