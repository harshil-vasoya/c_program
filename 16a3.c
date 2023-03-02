#include <stdio.h>
int main(int argc, char const *argv[])
{
	int ar[10000] ,n, x=0;
	printf("enter the size of n=");
	scanf("%d",&n);
	for (int i = 1; i <=n; ++i)
	{
		
		scanf("%d",&ar[i]);
		
	}
	
	for (int i = n; i!=0; --i)
	{
		printf("\n%d",ar[i]);	
	}
	
	return 0;
}