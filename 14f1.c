f#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n , sum=0;
	printf("enter a value of n for 1 + (1+2) + (1+2+3)....n , n=");
	scanf("%d",&n);
	for (int i = 1; i <=n; ++i)
	{

		for (int j = 1; j<=i; ++j)
		{
			sum=sum+j;
		}
	}
	printf("sum for your series is %d",sum);

	return 0;
}