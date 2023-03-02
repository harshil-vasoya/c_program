#include <stdio.h>
int main(int argc, char const *argv[])
{
	int ar[20];
	float sum[3];
	for (int i = 1; i <=3; ++i)
	{
		sum[i-1]=0;
		printf("enter the marks of %d student",i);
		for (int j= 1;  j<=5; ++j)
		{
			printf("\nsubject[%d]=",j);
			scanf("%d",&ar[i+j-2]);

			sum[i-1]=ar[i+j-2]+sum[i-1];
		}
	}
	printf("\nsum of  avg marks of student 1 is %f",sum[0]/5);
	printf("\nsum of  avg marks of student 2 is %f",sum[1]/5);
	printf("\nsum of  avg marks of student 3 is %f",sum[2]/5);

	return 0;
}