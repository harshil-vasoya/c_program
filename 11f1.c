#include <stdio.h>
int main(int argc, char const *argv[])
{ int ans=1,x ,y;
	printf("enter a value x for x^y, x=");
	scanf("%d",&x);
	printf("enter a value y for x^y, y=");
	scanf("%d",&y);
	
	for (int i = 0; i <y; ++i)
	{
		ans=ans*x;	
	
	}
	printf("\nsum of this series is %d",ans);
	return 0;

}