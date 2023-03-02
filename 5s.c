#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a;
	int k=1;
	
	


	scanf("%d",&a);
	int m=a;
	int n=a;
	for (int i=0; i<a; i++)
	{
		for(int j=1;j<k+1;j++)
		{
			printf("%d",m);
			m++;
		}
	n--;
	m=n;
		
		k++;
		printf("\n");
	}
}