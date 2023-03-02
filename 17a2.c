#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,positive=0, negative=0,zero=0;
	
	int ar[3][3];
	for (int i = 0; i <3; ++i)
	{
		printf("\nenter the elemnts in %d raw:",i);
		for (int j = 0; j <3; ++j)
		{
			printf("\nenter the value of ar[%d][%d]=",i,j);
			scanf("%d",&ar[i][j]);
			if(ar[i][j]>0)
				positive++;
			else if(ar[i][j]<0)
				negative++;
			else
				zero++;
		}
	}
	printf("\n there are %d is positive",positive);
	printf("\n there are %d is negative",negative);
	printf("\n there are %d is zero",zero);

	return 0;
}