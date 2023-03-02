#include <stdio.h>
int main(int argc, char const *argv[])
{
	long long x=3 ,y=4;

	x=x+y;
	y=x-y;
	x=x-y;


	printf("y=%lld and x=%lld",y,x);

	return 0;
}