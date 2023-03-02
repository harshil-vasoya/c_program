#include <stdio.h>
int main(int argc, char const *argv[])
{
	int basicsalary , hra , pa , grosssalary;
	printf("enter your basic salary =");
	scanf("%d", &basicsalary);
	if (basicsalary>=10000 && basicsalary<20000)
	{
		hra= (.20)*basicsalary;
		pa =(.80)*basicsalary;
		grosssalary= basicsalary + hra + pa;
		printf("your gross salary is %d " , grosssalary  );
	}
	if (basicsalary>=20000 && basicsalary<30000)
	{
		hra= (.25)*basicsalary;
		pa =(.90)*basicsalary;
		grosssalary= basicsalary + hra + pa;
		printf("your gross salary is %d" , grosssalary  );
	}
	if (basicsalary>=30000 && basicsalary<40000)
	{
		hra= (.30)*basicsalary;
		pa =(.95)*basicsalary;
		grosssalary= basicsalary + hra + pa;
		printf("your gross salary is %d" , grosssalary );
	}
	return 0;
}