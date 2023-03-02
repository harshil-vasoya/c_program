#include <stdio.h>
int main(int argc, char const *argv[])
{
	int ar[10000] ,n, x=0;
	printf("enter the size of n=");
	scanf("%d",&n);
	for (int i = 1; i <=n; ++i)
	{
		printf("enter a value in ar[%d]=",i);
		scanf("%d",&ar[i]);
		if(ar[i]>0)x++;	
	}
	
	printf("%d number is positive in your arr",x);
	printf("\n%d number is negative in your arr",n-x);
	return 0;
}