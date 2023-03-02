#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	for (n=7;n!=0; n--)
		printf("n=%d",n--);	
	getchar();
	return 0;
}