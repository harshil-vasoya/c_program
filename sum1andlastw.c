#include <stdio.h>
int main(int argc, char const *argv[])
{
	int number , fristletter ,lastletter, sum;
	printf("enter yor number a=");
	scanf("%d",&number);
	lastletter=number%10;
	

	while(number>=10)
	{
		number=number/10;

	}
	fristletter=number;

	sum= (fristletter + lastletter);

	printf("sum of your fristletter and lastletter is %d", sum);



	return 0;
}