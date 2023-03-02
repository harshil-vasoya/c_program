#include <stdio.h>
int main(int argc, char const *argv[])
{
	int ar[10000] ,n, min,max,sum=0;
	printf("enter the size of n=");
	scanf("%d",&n);
	for (int i = 1; i <=n; ++i)
	{
		printf("enter value in ar[%d]=",i);
		
		scanf("%d",&ar[i]);
		
	}
	max=ar[1];
	min=ar[2];
	
	for (int i = 1; i<=n; ++i)
	{
		if(ar[i]>max)
		{
			max=ar[i];
		}	
		if(ar[i]<min)
		{
			min=ar[i];
		}
		sum=sum+ar[i];


	}

	printf("\nmaximu number in your arr is %d",max);
	printf("\n min number in your arr is %d",min);
	printf("\n sum of the all alements in your arr is %d", sum);
	printf("\n average of your arr is %d",sum/n);
	
	return 0;
}