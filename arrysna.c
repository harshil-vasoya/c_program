#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[1000],b=1,c=0,n ;
	float ave;
	printf("enter a size of your arr n=" );
	scanf("%d",&n);
	while(b<=n)
	{
		printf("a[%d]=",b);
		scanf("%d",&a[b]);
			c=a[b]+c;
		b++;
	
	}
	printf("sum of your arr is %d",c);
	ave=(c)/n;
	printf("\n averge of your arr is %f",ave);
	return 0;
}