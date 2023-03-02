#include <stdio.h>
int main(int argc, char const *argv[])
{ int x ;
	printf("enter a value x for finad a fector of x, x=");
	scanf("%d",&x);
	
	printf("your fector is :");
	
	for (int i = 1; i <=x; ++i)
	{
		if(x%i==0)printf("\n %d",i);	
	
	}
	
	return 0;

}