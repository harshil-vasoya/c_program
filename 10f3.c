#include <stdio.h>
int main(int argc, char const *argv[])
{ int n,sum=0;
	printf("enter your number n for series 1-2+3-4...n , n=");
	scanf("%d",&n);
	
	for (int i = 0; i <= n; ++i)
	{
		if(i%2!=0)
		sum=sum+i;

		if(i%2==0)
			sum=sum-i
	
	}
	printf("\nsum of this series is %d",sum);
	return 0;

}