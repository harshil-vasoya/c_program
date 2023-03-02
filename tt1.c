#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a, b=2 , c,x;
	printf("enter your nuber a=" );
	scanf("%d",&a);

	while(b<a)
	{
		

		if(a%b==0)
		{
			printf("number is not prime");
			x=1;
			break;
		 }
		 		
		 if(x!=1)
		 {
		 			printf("nuber is prime");
		 		
		 			break;
		 		}
		 		
		 
		 b++;
}



	return 0; 
}