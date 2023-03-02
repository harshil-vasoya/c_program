#include <stdio.h>
int main(int argc, char const *argv[])
{
	for (int i = 1; i <=4; ++i)  	//c , e , 18-- , 19-a,e,g,h,i,  , 20-,a,b
	{
		for (int j = 1; j <=i; ++j)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}