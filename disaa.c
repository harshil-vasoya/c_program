#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a;
	scanf("%d",&a);
	int k=a-2;
	int p=0;
	for (int i = 0; i <=a+1; ++i)
	{
		for(int j=0;j<=a-i+1;j++)
		{
			printf(" ");
		}
		printf("*");
		if(i>0 && i!=a-2){
		for(int j=0;j<=2*i-2;j++)
		{
			printf(" ");
		}
		printf("*");
	}
	
		printf("\n");
	
	if(i==a-2)
	{
		for(int j=0; j<=2*i-2;j++)
		{
			if(i<=k-p&& i>=k+p)
			{
				printf("*");
			}
		}p++;
	}
	 }
	return 0;
}