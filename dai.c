#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a;

	scanf("%d",&a);
	int k=a-1;
	for (int i = 0; i <a; ++i)
	{

		for(int j=0;j<2*a-1;++j)
		{
			if(i==a-1)printf("*");

		else if(j==k-i ||j==k+i)
				printf("*");
			else
				printf(" ");
}
printf("\n");
	}
	return 0;
}