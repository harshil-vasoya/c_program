#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a , b=1 , c=0 ;
	printf("enter a number a=");
	scanf("%d",&a);

	while(b<=a)
	{
		if(a%b==0)
		{
			c=b+c;

		}
		
		

		if(c==a)
		{
			printf("given number is perfect");
			break;
		
			
		}
		
	
	b++;
}
	if(c!=a){
		printf("given number is not perfect");
	}
	


	return 0;
}