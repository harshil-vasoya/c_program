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
		if(ar[i]%2==0)x++;
	}
	printf("%d number is even in your arr",x);
	printf("%d number  is odd in your arr",n-x);
	return 0;
}