#include <stdio.h>
int main(int argc, char const *argv[])
{ 
	int x,y,c,z;
	printf("intial  , x=");
	scanf("%d",&x);
	
	printf("ending  y=");
	scanf("%d",&y);

	
	for (int i = x; i <=y; ++i)
	{
		for (int j = 2; j <i; j++)
		{
			
		
		if(i%j==0)
		{
			c=1;
			printf("\n %dnumber is not prime",i);

			break;
		}

		}	
	
	}

	printf("\n baki sab prime he , khud samaj lena ha achhe he");

	
	
	return 0;

}