#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	printf("\nenter the size of arry n=");
	scanf("%d",&n);
	 
	 float a[n], sum=0 , average=0,fn=0;
	
		
		for (int j= 0;  j<n; ++j)
		{
			printf("\n person[%d]=",j);
			scanf("%f",&a[j]);
			sum=sum+a[j];

		}
		average=sum/n;

		for (int i = 0; i <n; ++i)
		{
			if (average<a[i])
			{
				fn++;
			}
		}
		printf("\n %f",sum);
		printf("\n there is %f number of arry is higher than the average of arry",fn);



		
	return 0;
}