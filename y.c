#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a, b=2 , c=0,x;
	printf("enter your nuber a=" );
	scanf("%d",&a);

	while(b<a/2)
	{
		
		
		if(a%b==0)
		{
			c=c+1;
		}
			
		
		if(c>0)
		{
			break;
		}
		b++;
	}


		

		if(c==0)
		{
			printf("number is prime");
		
		 }
		 		
		 if(c!=0)
		 {
		 			printf("nuber is not prime");
		 		
		 			
		 		}
		 		
		 
		 b++;




	return 0; 
}