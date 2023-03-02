#include <stdio.h>
int n,k,v;
void leftp(int n,int v);
int main(int argc, char const *argv[])
{
	v=2*n-1;
	printf("enter the number of n:");
	scanf("%d",&n);

	leftp(n,v);
	
	return 0;
}
void leftp(int n,int v)
{
	if(n==v){return;}
	printf("%d ",v);
	
}
