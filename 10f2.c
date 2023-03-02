#include <stdio.h>
int main(int argc, char const *argv[])
{ int n,sum=0;
	printf("enter your number n for series 1+4+9+16...n , n=");
	scanf("%d",&n);
	
	for (int i = 0; i <= n; ++i)
	{
		sum=sum+i*i;
	
	}
	printf("\nsum of this series is %d",sum);
	return 0;

}