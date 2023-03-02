#include <stdio.h>
int n,a=0,b=1,c=0;
int fb(int n);
int main(int argc, char const *argv[])
{
	scanf("%d",&n);
	fb(n);
	return 0;
}
int fb(int n)
{	
	printf("\n%d",a);
		c=a+b;
		a=b;
		b=c;
	if(n!=0)
	fb(n-1);
	return 0;
}