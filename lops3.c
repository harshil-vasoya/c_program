#include <stdio.h>
int main(int argc, char const *argv[])
{
	float i=1 ,x=0, n ;
	printf("please enter the value of n for this series  1+1/2+1/3+1/4 n = ");
	scanf("%f",&n);

		while (i<=n)

	{
		x=x + 1/i;
		i++;

	}
	printf("sum of first %f number is= %f",n,x);

		


	return 0;
}