#include <stdio.h>
int main(int argc, char const *argv[])
{ 
	
	float n,sum=0;
	printf("enter your number n for series 1+1/2+1/3+1/4...n , n=");
	scanf("%f",&n);
	
	for (float i= 1; i <= n; ++i)
	{
		
			sum=sum+(1/i);
	
	}
	printf("\n sum of this series is %f",sum);
	return 0;

}