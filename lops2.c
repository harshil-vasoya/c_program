#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i=0 ,x=0,y=0,a, n ;
	printf("please enter the value of n , 1-2+3-4+5...n and n = ");
	scanf("%d",&n);

		while (i<=n)

	{
		if (i%2==0 )

		{
		
		x=x-i;
	}
	else 
	{
		
		y=y+i;
	}
		a= (x+y);
		i++;	
			
		

	}
	printf("sum of first %d number is= %d",n,a);

		


	return 0;
}