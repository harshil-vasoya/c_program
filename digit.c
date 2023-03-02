#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num ,i;
	printf("enter your number=");
	scanf("%d",&num);
	i=1;

	while(i<100){
		printf("%d",num%10);
		num=num/10;
	
		if(num<10 && num>0)
		{
			printf("%d",num);
			break;
		}
			i++;




	}



	
	return 0;
}