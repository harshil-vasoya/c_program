#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i=1 ,x=0,a, n = 4;
	printf("please enter the value of n , 1^2 + 2^2 + 3^2 + 4^2...+ n^2");
	scanf("%d",&n);
		while (i<=n)

	{
		printf("%d\n",i*i);
		x+=i*i;
		i++;	
			
		

	}
	printf("\n sum of this series  is %d",x);

		


	return 0;
}