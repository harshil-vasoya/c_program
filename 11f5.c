#include <stdio.h>
int main(int argc, char const *argv[])
{ int x,ar[100],sum=0 , y=0;

	float   avg=0;
	printf("enter a value x for size of your arr, x=");
	scanf("%d",&x);

	for (int i = 1; i <=x; ++i)
	{
		printf("\n enter a value of %d ar[%d]=",i,i);
		scanf("%d",&ar[i]);
		sum= sum +ar[i];

	}
	
	
		avg=sum/x;

		printf("sum of your arr is %d and avg is %f",sum,avg);
		


	
	
	
	return 0;

}