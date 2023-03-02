#include <stdio.h>
int n;
int hf(int n);
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	hf(n);
	return 0;
}
int hf(int n)
{
	for (int i = 0; i <1; ++i)
	{
		for (int j = 0; j <n; ++j)
		{
			if(i==0 || i==n-1)
				printf("%d",n);
			else
			{
				if(j==0 || j==n-1)
					printf("%d",n);
				else
					hf(n-1);
			}
		}
	}
	return 0;
}