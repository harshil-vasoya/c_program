#include <stdio.h>
int main(int argc, char const *argv[])
{

	int a=1,n,k=1;
	printf("enter the value of n for row=");
	scanf("%d",&n);
	char b='A';

	for (int i = 1; i <=n; ++i)
	{
		k=1;	
		for (int j = 1; j <=n-i; ++j)
		{
			printf(" ");
				
		}
		if(i%2!=0)
		{
			for ( k = 1; k <2*i; ++k)
			{
				if(k%2!=0){
					printf("%d",a );
					a++;
				}
				else
					printf(" ");
			}
		}
		else
		{
			for ( k = 1; k <2*i; ++k)
			{
				if(k%2!=0){
					printf("%c",b);
					b++;
				}
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
	
