#include <stdio.h>
int main(int argc, char const *argv[])
{
	int celsius;
	float fernhit;

	printf("enter your room tem in celsius ");
	scanf("%d" , &celsius);

	fernhit= (celsius)*1.8 + 32;

	printf("your room tem is %f in fernhit" , fernhit);
	
	return 0;
}