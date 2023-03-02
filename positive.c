#include <stdio.h>
int main(int argc, char const *argv[])
{

	int a  ;
	printf("argc =%d \n ", argc);
	printf("please enter your nuber\n");
	scanf("%d",&a);

	if(a<0)
	{
		printf("your number is negative");

	}
	if(a>0)
	{
		printf("your number is positive");
		
	}
	return 0;
}