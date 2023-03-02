#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i , x;
	x=20;
	i=0;
	while(i<=x)
	{
		if(i%2==0 && i%3!=0)
		{
		printf("\n %d", i);
		}
			i++;
		
	}
	return 0;
}