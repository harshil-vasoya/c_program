#include <stdio.h>
int main(int argc, char const *argv[])
{
	int months;
	printf("enter your month =");
	scanf("%d",&months);
	if(months==1 || months==3 || months==5 || months==7 || months==8 || months==10 || months==12)
	{
		printf(" there are 31 days in your %d month", months);
	}
	else if(months==4 || months==6 || months==9 || months==11 || months== 11)
	{
		printf("there are 30 days in your %d month", months);
	}
	else{
		printf("there are 28 days in your %d month", months);
	}
	return 0;
}