#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n1 ,n2 , n3 , n4 ,n5, n6 ,n7 , n8, n9 ,n10 ;
	printf("enter your  number n1=");
	scanf("%d", &n1);

	printf("\n enter your number n2=");
	scanf("%d", &n2);


	printf("\n enter your number n3=");
		scanf("%d", &n3);
	
	printf("\n enter your number n4=");
		scanf("%d", &n4);
	
	printf("\n enter your number n5=");
		scanf("%d", &n5);
	
	printf("\n enter your number n6=");
		scanf("%d", &n6);
	
	printf("\n enter your number n7=");
		scanf("%d", &n7);
		printf("\n enter your number n8=");
		scanf("%d", &n8);
	printf("\n enter your number n9=");
		scanf("%d", &n9);
	printf("\n enter your number n10=");
	scanf("%d", &n10);

	if(n1>n2 && n1>n3 &&n1>n4 && n1>n5 && n1>n6 && n1>n7 && n1>n8 && n1>n9 && n1>n10) 
	{
		printf("%d is gretest", n1);

	}

	else if(n2>n1 && n2>n3 &&n2>n4 && n2>n5 && n2>n6 && n2>n7 && n2>n8 && n2>n9 && n2>n10)
	{
		printf("%d is gretest", n2);
	} 

	else if(n3>n1 && n3>n2 &&n3>n4 && n3>n5 && n3>n6 && n3>n7 && n3>n8 && n3>n9 && n3>n10)
	{
		printf("%d is gretest", n3);
	}

	else if(n4>n1 && n4>n2 &&n4>n3 && n4>n5 && n4>n6 && n4>n7 && n4>n8 && n4>n9 && n4>n10)
	{
		printf("%d is gretest", n4);
	} 

	else if(n5>n1 && n5>n2 &&n5>n3 && n5>n4 && n5>n6 && n5>n7 && n5>n8 && n5>n9 && n5>n10)
	{
		printf("%d is gretest", n5);
	} 
		else if(n6>n1 && n6>n2 &&n6>n3 && n6>n4 && n6>n5 && n6>n7 && n6>n8 && n6>n9 && n6>n10)
	{
		printf("%d is gretest", n6);
	}
		else if(n7>n1 && n7>n2 &&n7>n3 && n7>n4 && n7>n5 && n7>n6 && n7>n8 && n7>n9 && n7>n10)
	{
		printf("%d is gretest", n7);
	} 
		else if(n8>n1 && n8>n2 &&n8>n3 && n8>n4 && n8>n6 && n8>n7 && n8>n5 && n8>n9 && n8>n10)
	{
		printf("%d is gretest", n8);
	} 
		else if(n9>n1 && n9>n2 &&n9>n3 && n9>n4 && n9>n6 && n9>n7 && n9>n8 && n9>n5 && n9>n10)
	{
		printf("%d is gretest", n9);
	} 

		else if(n10>n1 && n10>n2 &&n10>n3 && n10>n4 && n10>n6 && n10>n7 && n10>n8 && n10>n9 && n10>n5)
	{
		printf("%d is gretest", n10);
	}

	else{
		printf("something wrong , plese enter all numbers are difrent");
	}
	
 


 







	

	return 0;
}