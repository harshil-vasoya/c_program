#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	printf("enter the vule of n for making n*n matrix");
	scanf("%d",&n);
	int ar[n][n];
	for (int i = 0; i <n; ++i)
	{
		printf("\nenter the elemnts in %d raw:",i);
		for (int j = 0; j <n; ++j)
		{
			printf("\nenter the value of ar[%d][%d]=",i,j);
			scanf("%d",&ar[i][j]);
		}
	}

	for (int i = 0; i <n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d\t",ar[i][j]);
		}
		printf("\n");
	}
	return 0;
}