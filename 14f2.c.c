#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,a=1 , sum=0;
	// printf("enter a value of n for 1 + (1+2) + (1+2+3)....n , n=");
	// scanf("%d",&n);
	for (int i = 1; i <=4; ++i)
	{

		for (int j = 1; j<=i; ++j)
		{
			a=a*1/j;
			sum=sum + a;
			
		}
	}
	// printf("sum for your series is %d",sum);
	printf("", );

	return 0;
}