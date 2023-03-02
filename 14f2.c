#include <stdio.h>
int main(int argc, char const *argv[])
{
	float n,a=1 , sum=0,x;
	printf("enter a value of n for e=1+ 1/1!+1/2!+1/3!+1/4!+....n , n=");
	scanf("%f",&n);
	for (int i = 1; i <=n; ++i)
	{

		for (int j = 1; j<=i; ++j)
		{
			a=a*1/j;
			
			
		}
		sum=sum + a;
	}
	printf("sum for your series is %f",sum+1);
	

	return 0;
}