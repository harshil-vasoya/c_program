#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n , sum1=0 ,sum2=0;
	printf("enter the vule of n for making n*n matrix");
	scanf("%d",&n);
	int a[n][n] , b[n][n],mul[n][n];
	for (int i = 0; i <n; ++i)
	{
		printf("\nenter the elemnts for a matrix in %d raw:",i);
		for (int j = 0; j <n; ++j)
		{
			printf("\nenter the value of ar[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for (int i = 0; i <n; ++i)
	{
		printf("\nenter the elemnts for b matrix in %d raw:",i);
		for (int j = 0; j <n; ++j)
		{
			printf("\nenter the value of b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}

	for (int i = 0; i <n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for (int i = 0; i <n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	

	 for(int i=0;i<n;i++)    
	{    
		for(int j=0;j<n;j++)    
		{    
			mul[i][j]=0;    
			for(int k=0;k<n;k++)    
			{    
				mul[i][j]+=a[i][k]*b[k][j];    
			}    
		}    
	}

	printf("\n multipale of this two matrix is\n");
	for (int i = 0; i <n; ++i)
	{
		for (int j= 0; j<n; ++j)
		{
			printf("%d\t",mul[i][j] );
		}
		printf("\n");
	}
a



	return 0;
}
