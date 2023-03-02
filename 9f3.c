#include <stdio.h>
int main(int argc, char const *argv[])
{ int n;
	printf("enter your number n=");
	scanf("%d",&n);
	
	for (int i = 0; i <= n; ++i)
	{
		if(i%2!=0)
		printf("%d\n",i );
	}
	return 0;
}