#include <stdio.h>
long long int fect(int number);
int main(int argc, char const *argv[])
{
	 int n;
	scanf("%d",&n);
	printf("%lld",fect(n) );

	return 0;
}
long long int fect(int number)
{
	long long int sum=1;
	if(number==1 || number==0)
	{
		return 1;
	}
	else
	{
		sum=sum*number*(fect(number-1));
	}
	return sum;
}
