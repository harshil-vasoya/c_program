#include <stdio.h>
int main(int argc, char const *argv[])
{
	int fernhit;
	float celsius;

	printf("enter your room tem in fernhit ");
	scanf("%d" , &fernhit);

	celsius=(fernhit-32)*5/9;

	printf("your room tem is %f in celsius" , celsius);
	
	return 0;
}