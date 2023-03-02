#include <stdio.h>
int main(int argc, char const *argv[])
{
	for (int i = 1; i <=7; ++i)
	{
		for (int j = i; j <=i; ++j)
		{
			printf("%d",j);
		}
		i=j;
		printf("\n");
	}
	return 0;
}