#include <stdio.h>
int main(int argc, char const *argv[])
{ int fec=1,x ;
	printf("enter a value x for finad a fectorial, x=");
	scanf("%d",&x);
	
	
	for (int i = 1; i <=x; ++i)
	{
		fec=fec*i;	
	
	}
	printf("\nsum of this series is %d",fec);
	return 0;

}