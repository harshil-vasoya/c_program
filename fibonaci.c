#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i=0 , a , b , c ;

	a=0, b=1;
	for (int i = 0; i <10; ++i)
	{
		
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;


	}
	return 0;
}