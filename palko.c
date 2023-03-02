#include <stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
	char x[400];
	scanf("%s",x);
	int y=strlen(x);
	int m=0,z=y-1;

	for (int i = 0; i <=z; ++i)
	{
		if(x[i]==x[z-i])
		{
			m++;
		}
		else
		{
			printf("not same");
		}
	}
	if(m==y)
	{
		printf("yes");
	}
	return 0;
}