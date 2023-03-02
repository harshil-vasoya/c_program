#include <stdio.h>
int main(int argc, char const *argv[])
{ 
	int x,y,c,z;
	printf("enter a number for print that types of series \n like if you enter x=3 then you get \n 1\t2\t3 \n 2\t4\t6 \n 3\t6\t9 \n x=");
	scanf("%d",&x);

	printf("your pater is : \n");

	for (int i = 1; i <=x; ++i)
	{
	for (int j= 1; j <=x; j++)
	{
		printf("%d \t",i*j);
	}
	printf("\n");
	}
	return 0;

}