#include <stdio.h>
int main(int argc, char const *argv[])
{
	float n,a=1 , sum=0,x,y=1;
	printf("enter a value of n for e^x=1+ x/1!+x^2/2!+x^3/3!+x^4/4! , n=");
	scanf("%f",&n);
	printf("\nenter a value of x for e^x=1+ x/1!+x^2/2!+x^3/3!+x^4/4! , x=");

	scanf("%f",&x);
	for (int i = 1; i <=n; ++i)
	{
		y=y*x;


		for (int j = 1; j<=i; ++j)
		{
			a=(a/j);
			
			
		}
		sum=sum + y*a;
	}
	printf("sum for your series is %f",sum+1);
	

	return 0;
}