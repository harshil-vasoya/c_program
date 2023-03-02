#include <stdio.h>
int main(int argc, char const *argv[])
{ int n,sum=0;
	printf("enter your number n=");
	scanf("%d",&n);
	
	for (int i = 0; i <= n; ++i)
	{
		sum=sum+i;
	
	}
	printf("sum of this series is %d",sum);
	return 0;

}